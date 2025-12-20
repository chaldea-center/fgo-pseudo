void FollowerInfo___ctor(FollowerInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FollowerInfo__ChangeLimitCountBySpoilerProtection(FollowerInfo_o *this, const MethodInfo *method)
{
  ServantLeaderInfo_o *SpoilerSetting; // x0
  __int64 v4; // x1
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v7; // w21
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x20
  int v9; // w8
  unsigned int v10; // w21
  struct ServantLeaderInfo_array *userSvtGrandHash; // x19
  int v12; // w8
  unsigned int v13; // w20

  if ( (byte_4D2C3D2 & 1) == 0 )
  {
    sub_1C94098(&OptionManager_TypeInfo);
    byte_4D2C3D2 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  SpoilerSetting = (ServantLeaderInfo_o *)OptionManager__GetSpoilerSetting(0);
  if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
  {
    userSvtLeaderHash = this->fields.userSvtLeaderHash;
    if ( !userSvtLeaderHash )
      goto LABEL_26;
    max_length = userSvtLeaderHash->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( v7 < max_length )
      {
        SpoilerSetting = userSvtLeaderHash->m_Items[v7];
        if ( !SpoilerSetting )
          goto LABEL_26;
        ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0);
        max_length = userSvtLeaderHash->max_length;
        if ( (int)++v7 >= max_length )
          goto LABEL_12;
      }
LABEL_25:
      sub_1C942F8(SpoilerSetting);
    }
LABEL_12:
    eventUserSvtLeaderHash = this->fields.eventUserSvtLeaderHash;
    if ( !eventUserSvtLeaderHash )
      goto LABEL_26;
    v9 = eventUserSvtLeaderHash->max_length;
    if ( v9 >= 1 )
    {
      v10 = 0;
      while ( v10 < v9 )
      {
        SpoilerSetting = eventUserSvtLeaderHash->m_Items[v10];
        if ( !SpoilerSetting )
          goto LABEL_26;
        ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0);
        v9 = eventUserSvtLeaderHash->max_length;
        if ( (int)++v10 >= v9 )
          goto LABEL_18;
      }
      goto LABEL_25;
    }
LABEL_18:
    userSvtGrandHash = this->fields.userSvtGrandHash;
    if ( !userSvtGrandHash )
LABEL_26:
      sub_1C942F0(SpoilerSetting, v4);
    v12 = userSvtGrandHash->max_length;
    if ( v12 >= 1 )
    {
      v13 = 0;
      while ( v13 < v12 )
      {
        SpoilerSetting = userSvtGrandHash->m_Items[v13];
        if ( !SpoilerSetting )
          goto LABEL_26;
        ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0);
        v12 = userSvtGrandHash->max_length;
        if ( (int)++v13 >= v12 )
          return;
      }
      goto LABEL_25;
    }
  }
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v10);
  ServantLeaderInfo__GetAppendPassiveSkillInfo_44373608(
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v6);
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
  __int64 v15; // x9
  int v16; // w26
  int32_t i; // w22
  __int64 v18; // x23
  __int64 v19; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  struct System_Int32_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_int__o *v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4D2C3CC & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C3CC = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(this, returnSupportServantType, v8);
  IsNullOrEmpty = (ServantLeaderInfo_o *)BasicHelper__IsNullOrEmpty(
                                           (System_Collections_ICollection_o *)ServantLeaderInfoByReturnType,
                                           0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !ServantLeaderInfoByReturnType )
LABEL_31:
      sub_1C942F0(IsNullOrEmpty, v11);
    if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
LABEL_32:
      sub_1C942F8(IsNullOrEmpty);
    v12 = &ServantLeaderInfoByReturnType->obj.klass + index;
    v14 = v12[4];
    v13 = (void **)(v12 + 4);
    if ( v14 )
    {
      IsNullOrEmpty = (ServantLeaderInfo_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        IsNullOrEmpty = (ServantLeaderInfo_o *)BalanceConfig_TypeInfo;
      }
      v15 = 48;
      if ( returnSupportServantType == 2 )
        v15 = 52;
      v16 = *(_DWORD *)(*(_QWORD *)&IsNullOrEmpty->fields.commandCardLimitCount + v15);
      if ( v16 >= 1 )
      {
        for ( i = 0; v16 != i; ++i )
        {
          if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
            goto LABEL_32;
          IsNullOrEmpty = (ServantLeaderInfo_o *)*v13;
          if ( !*v13 )
            goto LABEL_31;
          IsNullOrEmpty = (ServantLeaderInfo_o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(IsNullOrEmpty, i, 0);
          if ( IsNullOrEmpty )
          {
            v19 = *(_QWORD *)&IsNullOrEmpty->fields.svtId.fields.fakeValue;
            v18 = *(_QWORD *)&IsNullOrEmpty->fields.limitCount;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v29.fields.currentCryptoKey = v19;
            *(_QWORD *)&v29.fields.fakeValue = v18;
            IsNullOrEmpty = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                     v29,
                                                     0);
            if ( !v7 )
              goto LABEL_31;
            items = v7->fields._items;
            v21 = Method_System_Collections_Generic_List_int__Add__;
            ++v7->fields._version;
            if ( !items )
              goto LABEL_31;
            size = v7->fields._size;
            v11 = (unsigned int)IsNullOrEmpty;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              v26 = v21[4];
              v27 = v7;
LABEL_28:
              System_Collections_Generic_List_int___AddWithResize(
                v27,
                v11,
                *(const MethodInfo_384DE10 **)(*(_QWORD *)(v26 + 192) + 112LL));
              continue;
            }
            v7->fields._size = size + 1;
            items->m_Items[size] = (int)IsNullOrEmpty;
          }
          else
          {
            if ( !v7 )
              goto LABEL_31;
            v23 = v7->fields._items;
            v24 = Method_System_Collections_Generic_List_int__Add__;
            ++v7->fields._version;
            if ( !v23 )
              goto LABEL_31;
            v25 = v7->fields._size;
            if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
            {
              v26 = v24[4];
              v27 = v7;
              LODWORD(v11) = 0;
              goto LABEL_28;
            }
            v7->fields._size = v25 + 1;
            v23->m_Items[v25] = 0;
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
  int32_t max_length; // w8
  ServantLeaderInfo_o *v9; // x0

  if ( servantLeaderIndex < 0 )
    return 0;
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    return 0;
  max_length = ServantLeaderInfoByReturnType->max_length;
  if ( max_length <= servantLeaderIndex )
    return 0;
  if ( max_length <= (unsigned int)servantLeaderIndex )
    sub_1C942F8(ServantLeaderInfoByReturnType);
  v9 = ServantLeaderInfoByReturnType->m_Items[servantLeaderIndex];
  if ( v9 )
    return ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(v9, equipIndex, 0);
  else
    return 0;
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v6);
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
  UserServantGrandInfo_o *result; // x0
  UserServantGrandInfo_c *v10; // x0

  if ( (byte_4D2C3C9 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_IndexValue_ServantLeaderInfo___);
    sub_1C94098(&UserServantGrandInfo_TypeInfo);
    byte_4D2C3C9 = 1;
  }
  ServantLeaderInfoByReturnType = (System_Object_array *)FollowerInfo__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&returnSupportServantType);
  v8 = BasicHelper__IndexValue_object_(
         ServantLeaderInfoByReturnType,
         index,
         0,
         (const MethodInfo_318A668 *)Method_BasicHelper_IndexValue_ServantLeaderInfo___);
  if ( !v8 || (result = ServantLeaderInfo__get_GrandInfo((ServantLeaderInfo_o *)v8, 0)) == 0 )
  {
    v10 = UserServantGrandInfo_TypeInfo;
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
      v10 = UserServantGrandInfo_TypeInfo;
    }
    return v10->static_fields->Empty;
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v6);
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
  Il2CppObject *v10; // x23
  Il2CppObject *v11; // x22
  const MethodInfo *v12; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v13; // x25
  struct System_Byte_array *masterDataBytes; // x26
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x27
  int32_t v16; // w0
  int32_t currentCryptoKey; // w26
  int32_t hiddenValue; // w28
  int32_t v19; // w27
  System_Int32_array *LimitAddIndividuality; // x24
  System_Int32_array *Individuality; // x23
  FollowerInfo_o *v22; // x0
  const MethodInfo *v23; // x3
  FollowerInfo_o *UnionIndividuality; // x0
  const MethodInfo *v25; // x3
  System_Int32_array *v26; // x23
  const MethodInfo *v27; // x3
  FollowerInfo_o *ServantBaseIndividuality; // x0
  const MethodInfo *v29; // x3
  System_Int32_array *v30; // x20
  FollowerInfo_o *AddIndividuality; // x0
  const MethodInfo *v32; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4D2C3C6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantIndividualityMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_1C94098(&ImageLimitCount_TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C3C6 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  v10 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantIndividualityMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  v11 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
  Instance = (DataManager_o *)FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, v12);
  if ( !Instance )
    goto LABEL_21;
  v13 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance;
  lookup = Instance->fields.lookup;
  masterDataBytes = Instance->fields.masterDataBytes;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = lookup;
  *(_QWORD *)&v35.fields.fakeValue = masterDataBytes;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v35, 0);
  currentCryptoKey = v13[4].fields.currentCryptoKey;
  hiddenValue = v13[11].fields.hiddenValue;
  v19 = v16;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__ConvertDispLimitCountForClient(hiddenValue, 0);
  if ( !MasterData_object )
    goto LABEL_21;
  LimitAddIndividuality = ServantLimitAddMaster__GetLimitAddIndividuality(
                            (ServantLimitAddMaster_o *)MasterData_object,
                            v19,
                            currentCryptoKey,
                            (int32_t)Instance,
                            0);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v13[3], 0);
  if ( !v10 )
    goto LABEL_21;
  Individuality = ServantIndividualityMaster__GetIndividuality(
                    (ServantIndividualityMaster_o *)v10,
                    (int32_t)Instance,
                    v13[4].fields.currentCryptoKey,
                    0);
  v22 = (FollowerInfo_o *)sub_1C94140(int___TypeInfo, 0);
  UnionIndividuality = (FollowerInfo_o *)FollowerInfo__GetUnionIndividuality(
                                           v22,
                                           (System_Int32_array *)v22,
                                           LimitAddIndividuality,
                                           v23);
  v26 = FollowerInfo__GetUnionIndividuality(
          UnionIndividuality,
          (System_Int32_array *)UnionIndividuality,
          Individuality,
          v25);
  ServantBaseIndividuality = (FollowerInfo_o *)FollowerInfo__GetServantBaseIndividuality(
                                                 this,
                                                 index,
                                                 returnSupportServantType,
                                                 v27);
  Instance = (DataManager_o *)FollowerInfo__GetUnionIndividuality(
                                ServantBaseIndividuality,
                                v26,
                                (System_Int32_array *)ServantBaseIndividuality,
                                v29);
  if ( !v11 )
    goto LABEL_21;
  v30 = (System_Int32_array *)Instance;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v11,
         &entity,
         this->fields.npcFollowerSvtId,
         (const MethodInfo_345DA68 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
    {
      AddIndividuality = (FollowerInfo_o *)NpcServantFollowerIndividualityEntity__GetAddIndividuality(
                                             (NpcServantFollowerIndividualityEntity_o *)entity,
                                             0);
      Instance = (DataManager_o *)FollowerInfo__GetUnionIndividuality(
                                    AddIndividuality,
                                    v30,
                                    (System_Int32_array *)AddIndividuality,
                                    v32);
      if ( entity )
        return NpcServantFollowerIndividualityEntity__GetExcludedIndividuality(
                 (NpcServantFollowerIndividualityEntity_o *)entity,
                 (System_Int32_array *)Instance,
                 0);
    }
LABEL_21:
    sub_1C942F0(Instance, v8);
  }
  return v30;
}


System_Int32_array *FollowerInfo__GetNpcServantIndividualityFull(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  const MethodInfo *v11; // x3
  ServantLeaderInfo_o *ServantLeaderInfo; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  __int64 v14; // x21
  __int64 v15; // x22
  Il2CppObject *v16; // x0
  int32_t limitCount; // w20
  int32_t dispLimitCount; // w21
  ServantEntity_o *v19; // x19
  Il2CppObject *v20; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4D2C3C7 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C94098(&ImageLimitCount_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C3C7 = 1;
  }
  v20 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !Master_object )
    goto LABEL_27;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v20,
         this->fields.npcFollowerSvtId,
         (const MethodInfo_345DA68 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    return FollowerInfo__GetNpcServantIndividuality(this, index, returnSupportServantType, v9);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  if ( !Master_object )
    goto LABEL_27;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         this->fields.npcFollowerSvtId,
         (const MethodInfo_345DA68 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
  {
    Master_object = entity;
    if ( !entity )
      goto LABEL_27;
    if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)entity, 0) )
    {
      Master_object = entity;
      if ( entity )
        return NpcServantFollowerEntity__GetOverwriteIndividuality((NpcServantFollowerEntity_o *)entity, 0);
LABEL_27:
      sub_1C942F0(Master_object, v8);
    }
  }
  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, v11);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !ServantLeaderInfo )
    goto LABEL_27;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v15 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v15;
  *(_QWORD *)&v22.fields.fakeValue = v14;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v22, 0);
  if ( !v13 )
    goto LABEL_27;
  v16 = DataMasterBase_object__object__int___GetEntity(
          v13,
          (int32_t)Master_object,
          (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  limitCount = ServantLeaderInfo->fields.limitCount;
  dispLimitCount = ServantLeaderInfo->fields.dispLimitCount;
  v19 = (ServantEntity_o *)v16;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Master_object = (Il2CppObject *)ImageLimitCount__ConvertDispLimitCountForClient(dispLimitCount, 0);
  if ( !v19 )
    goto LABEL_27;
  return ServantEntity__getIndividuality(v19, limitCount, (int32_t)Master_object, 0);
}


// local variable allocation has failed, the output may be wrong!
bool FollowerInfo__GetQuestRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x20
  void *IsNpc; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Int32_array *v13; // x21
  bool isWhole; // [xsp+Ch] [xbp-34h] BYREF

  isWhole = 0;
  if ( !questRestrictionInfo )
    return 0;
  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(
                        this,
                        index,
                        returnSupportServantType,
                        *(const MethodInfo **)&returnSupportServantType);
  IsNpc = (void *)Follower__IsNpc(this->fields.type, 0);
  if ( ((unsigned __int8)IsNpc & 1) == 0 )
  {
    if ( ServantLeaderInfo )
      return ServantLeaderInfo__getQuestRestriction(ServantLeaderInfo, questRestrictionInfo, 0);
LABEL_10:
    sub_1C942F0(IsNpc, v11);
  }
  IsNpc = FollowerInfo__GetNpcServantIndividualityFull(this, index, returnSupportServantType, v12);
  if ( !ServantLeaderInfo )
    goto LABEL_10;
  v13 = (System_Int32_array *)IsNpc;
  IsNpc = ServantLeaderInfo__GetOverwriteStatus(ServantLeaderInfo, 0);
  if ( !IsNpc )
    goto LABEL_10;
  return QuestRestrictionInfo__IsRestriction_44209436(
           questRestrictionInfo,
           &isWhole,
           v13,
           *((_DWORD *)IsNpc + 6),
           ServantLeaderInfo->fields.lv,
           3,
           0);
}


// local variable allocation has failed, the output may be wrong!
bool FollowerInfo__GetQuestRestriction_42513440(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        int32_t initPos,
        bool *isWhole,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x22
  void *IsNpc; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  System_Int32_array *v17; // x23
  bool result; // w0
  __int64 v19; // x23
  __int64 v20; // x24
  int32_t v21; // w0
  int32_t limitCount; // w23
  int32_t v23; // w24
  int32_t DispLimitCount; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4D2C3CF & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C3CF = 1;
  }
  if ( questRestrictionInfo )
  {
    ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(
                          this,
                          index,
                          returnSupportServantType,
                          *(const MethodInfo **)&returnSupportServantType);
    IsNpc = (void *)Follower__IsNpc(this->fields.type, 0);
    if ( ((unsigned __int8)IsNpc & 1) != 0 )
    {
      IsNpc = FollowerInfo__GetNpcServantIndividualityFull(this, index, returnSupportServantType, v16);
      if ( ServantLeaderInfo )
      {
        v17 = (System_Int32_array *)IsNpc;
        IsNpc = ServantLeaderInfo__GetOverwriteStatus(ServantLeaderInfo, 0);
        if ( IsNpc )
          return QuestRestrictionInfo__IsRestriction_44210688(
                   questRestrictionInfo,
                   isWhole,
                   v17,
                   *((_DWORD *)IsNpc + 6),
                   ServantLeaderInfo->fields.lv,
                   initPos,
                   3,
                   0);
      }
LABEL_14:
      sub_1C942F0(IsNpc, v15);
    }
    if ( !ServantLeaderInfo )
      goto LABEL_14;
    v20 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = v20;
    *(_QWORD *)&v25.fields.fakeValue = v19;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v25, 0);
    limitCount = ServantLeaderInfo->fields.limitCount;
    v23 = v21;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(ServantLeaderInfo, 0);
    IsNpc = ServantLeaderInfo__GetOverwriteStatus(ServantLeaderInfo, 0);
    if ( !IsNpc )
      goto LABEL_14;
    return QuestRestrictionInfo__IsRestriction_44210408(
             questRestrictionInfo,
             isWhole,
             v23,
             limitCount,
             DispLimitCount,
             *((_DWORD *)IsNpc + 6),
             ServantLeaderInfo->fields.lv,
             initPos,
             2,
             0);
  }
  else
  {
    result = 0;
    *isWhole = 0;
  }
  return result;
}


int32_t FollowerInfo__GetReturnTypeByQuestId(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4D2C3C2 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C94098(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C3C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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

  if ( (byte_4D2C3C4 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C3C4 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( LODWORD(v8->max_length) <= index )
    sub_1C942F8(Instance);
  v11 = *(_QWORD *)&v8->m_Items[2 * index];
  if ( !v11 )
    goto LABEL_16;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v14 = *(_QWORD *)(v11 + 48);
  v13 = *(_QWORD *)(v11 + 56);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v14;
  *(_QWORD *)&v15.fields.fakeValue = v13;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v15, 0);
  if ( !v12
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v12,
                     (int32_t)Instance,
                     (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_16:
    sub_1C942F0(Instance, v10);
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
      v5 = sub_1C940AC(&System_ArgumentOutOfRangeException_TypeInfo);
      v6 = (System_ArgumentOutOfRangeException_o *)sub_1C942E4(v5);
      v7 = (System_String_o *)sub_1C940AC(&StringLiteral_23321/*"returnSupportServantType"*/);
      v8 = (System_String_o *)sub_1C940AC(&StringLiteral_25708/*"予期されないReturnSupportServantTypeです。"*/);
      System_ArgumentOutOfRangeException___ctor_65442584(v6, v7, v8, 0);
      v9 = sub_1C940AC(&Method_FollowerInfo_GetServantLeaderInfoByReturnType__);
      sub_1C941C0(v6, v9);
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

  if ( (byte_4D2C3C5 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Union_int___);
    byte_4D2C3C5 = 1;
  }
  if ( !addIndividualities || !addIndividualities->max_length )
    return targetIndividualities;
  v6 = System_Linq_Enumerable__Union_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)targetIndividualities,
         (System_Collections_Generic_IEnumerable_TSource__o *)addIndividualities,
         (const MethodInfo_31E1A80 *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v6,
           (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
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
    sub_1C942F8(this);
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
  const MethodInfo *v9; // x3
  ServantLeaderInfo_o *ServantLeaderInfo; // x21
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x20
  __int64 v15; // x21
  __int64 v16; // x22
  Il2CppObject *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4D2C3D0 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C3D0 = 1;
  }
  if ( !questRestrictionInfo || Follower__IsNpc(this->fields.type, 0) )
    return 0;
  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, v9);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !ServantLeaderInfo )
    goto LABEL_16;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v16 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v16;
  *(_QWORD *)&v18.fields.fakeValue = v15;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v18, 0);
  if ( !v14
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v14,
                   (int32_t)Master_object,
                   (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantClassMaster___),
        !Entity)
    || !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          (int32_t)Entity[5].klass,
                          (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0 )
  {
LABEL_16:
    sub_1C942F0(Master_object, v13);
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
  int32_t max_length; // w8
  ServantLeaderInfo_o *v7; // x0

  if ( index < 0 )
    return 0;
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    return 0;
  max_length = ServantLeaderInfoByReturnType->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1C942F8(ServantLeaderInfoByReturnType);
  v7 = ServantLeaderInfoByReturnType->m_Items[index];
  return v7 && ServantLeaderInfo__get_IsGrandSvt(v7, 0);
}


bool FollowerInfo__IsSlotClassRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  ServantLeaderInfo_o *ServantLeaderInfo; // x21
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x20
  __int64 v15; // x21
  __int64 v16; // x22
  Il2CppObject *Entity; // x20
  Il2CppObject *v18; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4D2C3D1 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D2C3D1 = 1;
  }
  if ( !questRestrictionInfo || Follower__IsNpc(this->fields.type, 0) )
    return 0;
  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, v9);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !ServantLeaderInfo )
    goto LABEL_17;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v16 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v16;
  *(_QWORD *)&v19.fields.fakeValue = v15;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v19, 0);
  if ( !v14
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v14,
                   (int32_t)Master_object,
                   (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantClassMaster___),
        !Entity)
    || !Master_object
    || (v18 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)Entity[5].klass,
                (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__),
        (Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || !v18 )
  {
LABEL_17:
    sub_1C942F0(Master_object, v13);
  }
  return QuestRestrictionInfo__IsMySvtOrSupportSlotClassRestriction(
           questRestrictionInfo,
           HIDWORD(Master_object[5].klass),
           (int32_t)v18[2].klass,
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v8);
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v9);
  return ServantLeaderInfo__IsUniqueIndividualityRestriction(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           questRestrictionInfo,
           this,
           0);
}


// local variable allocation has failed, the output may be wrong!
bool FollowerInfo__IsUniqueIndividualityRestriction_42514108(
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v13);
  return ServantLeaderInfo__IsUniqueIndividualityRestriction_44362404(
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  FollowerInfo_o *v9; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
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
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.userSvtGrandHash,
          (int32_t)equipTargetInfo,
          (int32_t)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (eventUserSvtLeaderHash = v9->fields.eventUserSvtLeaderHash) == 0) )
  {
LABEL_8:
    sub_1C942F0(this, equipTargetInfo);
  }
  if ( !LODWORD(eventUserSvtLeaderHash->max_length) )
LABEL_9:
    sub_1C942F8(this);
  this = (FollowerInfo_o *)eventUserSvtLeaderHash->m_Items[0];
  if ( !this )
    goto LABEL_8;
  this->fields.userSvtGrandHash = (struct ServantLeaderInfo_array *)equipTargetInfo;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtGrandHash,
    (int32_t)equipTargetInfo,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  v7 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v7 )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v6);
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  v7 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v7 )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v6);
  return v7->fields.adjustHp;
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getAtk(
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  v7 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v7 )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v6);
  return v7->fields.atk;
}


int32_t FollowerInfo__getCardImageLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getCardImageLimitCount(ServantLeaderInfo, 0);
  return (int)ServantLeaderInfo;
}


int32_t FollowerInfo__getCommandCardLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getCommandCardLimitCount(ServantLeaderInfo, 0);
  return (int)ServantLeaderInfo;
}


System_Int32_array *FollowerInfo__getCommandCodeIdList(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0

  result = (System_Int32_array *)FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( result )
    return ServantLeaderInfo__getCommandCodeIdList((ServantLeaderInfo_o *)result, 0);
  return result;
}


int32_t FollowerInfo__getDispLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getDispLimitCount(ServantLeaderInfo, 0);
  return (int)ServantLeaderInfo;
}


int32_t FollowerInfo__getEquipAtk(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x0
  FollowerInfo___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__int__o *_9__58_0; // x20
  Il2CppObject *v12; // x21
  struct FollowerInfo___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D2C3CE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
    sub_1C94098(&System_Func_EquipTargetInfo__int__TypeInfo);
    sub_1C94098(&Method_FollowerInfo___c__getEquipAtk_b__58_0__);
    sub_1C94098(&FollowerInfo___c_TypeInfo);
    byte_4D2C3CE = 1;
  }
  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
  {
    EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(ServantLeaderInfo, 0);
    v9 = FollowerInfo___c_TypeInfo;
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)EquipTargetInfoList;
    if ( !FollowerInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerInfo___c_TypeInfo);
      v9 = FollowerInfo___c_TypeInfo;
    }
    _9__58_0 = (System_Func_object__int__o *)v9->static_fields->__9__58_0;
    if ( !_9__58_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = FollowerInfo___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v9->static_fields->__9;
      _9__58_0 = (System_Func_object__int__o *)sub_1C942E4(System_Func_EquipTargetInfo__int__TypeInfo);
      System_Func_object__int____ctor(_9__58_0, v12, Method_FollowerInfo___c__getEquipAtk_b__58_0__, 0);
      static_fields = FollowerInfo___c_TypeInfo->static_fields;
      static_fields->__9__58_0 = (struct System_Func_EquipTargetInfo__int__o *)_9__58_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__58_0,
        (int32_t)_9__58_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    LODWORD(ServantLeaderInfo) = System_Linq_Enumerable__Sum_object_(
                                   v10,
                                   (System_Func_TSource__int__o *)_9__58_0,
                                   (const MethodInfo_31DAF64 *)Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
  }
  return (int)ServantLeaderInfo;
}


// local variable allocation has failed, the output may be wrong!
bool FollowerInfo__getEquipEventUpVal(
        FollowerInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v8);
  return ServantLeaderInfo__getEquipEventUpVal((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, setupInfo, 0);
}


int32_t FollowerInfo__getEquipHp(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x0
  FollowerInfo___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__int__o *_9__57_0; // x20
  Il2CppObject *v12; // x21
  struct FollowerInfo___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D2C3CD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
    sub_1C94098(&System_Func_EquipTargetInfo__int__TypeInfo);
    sub_1C94098(&Method_FollowerInfo___c__getEquipHp_b__57_0__);
    sub_1C94098(&FollowerInfo___c_TypeInfo);
    byte_4D2C3CD = 1;
  }
  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
  {
    EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(ServantLeaderInfo, 0);
    v9 = FollowerInfo___c_TypeInfo;
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)EquipTargetInfoList;
    if ( !FollowerInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerInfo___c_TypeInfo);
      v9 = FollowerInfo___c_TypeInfo;
    }
    _9__57_0 = (System_Func_object__int__o *)v9->static_fields->__9__57_0;
    if ( !_9__57_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = FollowerInfo___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v9->static_fields->__9;
      _9__57_0 = (System_Func_object__int__o *)sub_1C942E4(System_Func_EquipTargetInfo__int__TypeInfo);
      System_Func_object__int____ctor(_9__57_0, v12, Method_FollowerInfo___c__getEquipHp_b__57_0__, 0);
      static_fields = FollowerInfo___c_TypeInfo->static_fields;
      static_fields->__9__57_0 = (struct System_Func_EquipTargetInfo__int__o *)_9__57_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__57_0,
        (int32_t)_9__57_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    LODWORD(ServantLeaderInfo) = System_Linq_Enumerable__Sum_object_(
                                   v10,
                                   (System_Func_TSource__int__o *)_9__57_0,
                                   (const MethodInfo_31DAF64 *)Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
  }
  return (int)ServantLeaderInfo;
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v8);
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
  int32_t max_length; // w8
  ServantLeaderInfo_o *v9; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v11; // x19
  __int64 v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4D2C3CB & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C3CB = 1;
  }
  if ( index < 0 )
    return 0;
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    return 0;
  max_length = ServantLeaderInfoByReturnType->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1C942F8(ServantLeaderInfoByReturnType);
  v9 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v9 )
    return 0;
  equipTarget1 = v9->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0;
  v12 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v12;
  *(_QWORD *)&v14.fields.fakeValue = v11;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v14, 0);
}


// local variable allocation has failed, the output may be wrong!
EquipTargetInfo_o *FollowerInfo__getEquipTarget1(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  EquipTargetInfo_o *result; // x0
  int32_t currentCryptoKey; // w8
  __int64 v7; // x8

  if ( index < 0 )
    return 0;
  result = (EquipTargetInfo_o *)FollowerInfo__GetServantLeaderInfoByReturnType(
                                  this,
                                  returnSupportServantType,
                                  *(const MethodInfo **)&returnSupportServantType);
  if ( !result )
    return result;
  currentCryptoKey = result->fields.userSvtId.fields.currentCryptoKey;
  if ( currentCryptoKey <= index )
    return 0;
  if ( currentCryptoKey <= (unsigned int)index )
    sub_1C942F8(result);
  v7 = *(&result->fields.userSvtId.fields.hiddenValue + (unsigned int)index);
  if ( !v7 )
    return 0;
  else
    return *(EquipTargetInfo_o **)(v7 + 144);
}


// local variable allocation has failed, the output may be wrong!
int64_t FollowerInfo__getEquipUserSvtId(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  int64_t result; // x0
  int32_t v8; // w8
  __int64 v9; // x8
  __int64 v10; // x8
  __int128 v11; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-50h]

  if ( (byte_4D2C3CA & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2C3CA = 1;
  }
  if ( index < 0 )
    return 0;
  result = (int64_t)FollowerInfo__GetServantLeaderInfoByReturnType(
                      this,
                      returnSupportServantType,
                      *(const MethodInfo **)&returnSupportServantType);
  if ( !result )
    return result;
  v8 = *(_DWORD *)(result + 24);
  if ( v8 <= index )
    return 0;
  if ( v8 <= (unsigned int)index )
    sub_1C942F8(result);
  v9 = *(_QWORD *)(result + 8LL * (unsigned int)index + 32);
  if ( !v9 )
    return 0;
  v10 = *(_QWORD *)(v9 + 144);
  if ( !v10 )
    return 0;
  v11 = *(_OWORD *)(v10 + 40);
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)(v10 + 24);
  *(_OWORD *)&v13.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v12, 0);
}


// local variable allocation has failed, the output may be wrong!
bool FollowerInfo__getEventUpVal(
        FollowerInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v8);
  return ServantLeaderInfo__getEventUpVal((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, setupInfo, 0);
}


bool FollowerInfo__getEventUpVal_42513028(
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v10);
  return ServantLeaderInfo__getEventUpVal_44359988(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           eventUpVallInfo,
           setupInfo,
           0,
           0);
}


bool FollowerInfo__getEventUpVal_42513120(
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v14);
  return ServantLeaderInfo__getEventUpVal_44361276(
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
  int32_t max_length; // w8
  ServantLeaderInfo_o *v7; // x8

  if ( index < 0 )
    goto LABEL_8;
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( ServantLeaderInfoByReturnType )
  {
    max_length = ServantLeaderInfoByReturnType->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
        sub_1C942F8(ServantLeaderInfoByReturnType);
      v7 = ServantLeaderInfoByReturnType->m_Items[index];
      if ( v7 )
      {
        LODWORD(ServantLeaderInfoByReturnType) = v7->fields.exceedCount;
        return (int)ServantLeaderInfoByReturnType;
      }
    }
LABEL_8:
    LODWORD(ServantLeaderInfoByReturnType) = 0;
  }
  return (int)ServantLeaderInfoByReturnType;
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getExp(
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  v7 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v7 )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v6);
  return v7->fields.exp;
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getHp(
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  v7 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v7 )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v6);
  return v7->fields.hp;
}


int32_t FollowerInfo__getIconImageLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getIconLimitCount(ServantLeaderInfo, 0);
  return (int)ServantLeaderInfo;
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
  __int64 v16; // x24
  __int64 v17; // x27
  ServantLeaderInfo_o *v18; // x8
  __int64 v19; // x25
  __int64 v20; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4D2C3C3 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C3C3 = 1;
  }
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_24;
  v12 = ServantLeaderInfoByReturnType;
  IsNpc = Follower__IsNpc(this->fields.type, 0);
  max_length = v12->max_length;
  if ( (IsNpc & 1) == 0 )
  {
    if ( (int)max_length < 1 )
      goto LABEL_24;
    v16 = 0;
    v17 = (unsigned int)v12->max_length - 1LL;
    while ( 1 )
    {
      v18 = v12->m_Items[v16];
      if ( supportDeckId < 1 )
      {
        if ( !v18 )
LABEL_26:
          sub_1C942F0(IsNpc, v14);
      }
      else
      {
        if ( !v18 )
          goto LABEL_26;
        if ( v18->fields.supportDeckId != supportDeckId )
          goto LABEL_21;
      }
      if ( returnSupportServantType == 2 )
      {
        if ( v18->fields.grandGraphId == grandGraphId )
          return v16;
      }
      else if ( v18->fields.classId == classId )
      {
        v20 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v22.fields.currentCryptoKey = v20;
        *(_QWORD *)&v22.fields.fakeValue = v19;
        IsNpc = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v22, 0);
        if ( (int)IsNpc > 0 )
          return v16;
      }
LABEL_21:
      if ( v17 == v16 )
        goto LABEL_24;
      if ( ++v16 >= (unsigned __int64)LODWORD(v12->max_length) )
        sub_1C942F8(IsNpc);
    }
  }
  if ( !max_length )
  {
LABEL_24:
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
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v8; // x1
  il2cpp_array_size_t max_length; // x9
  ServantLeaderInfo_array *v10; // x8
  __int64 v11; // x0
  ServantLeaderInfo_o **m_Items; // x8
  ServantLeaderInfo_o *v13; // x10

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( ServantLeaderInfoByReturnType )
  {
    max_length = ServantLeaderInfoByReturnType->max_length;
    v10 = ServantLeaderInfoByReturnType;
    if ( (int)max_length >= 1 )
    {
      v11 = 0;
      m_Items = v10->m_Items;
      while ( 1 )
      {
        v13 = m_Items[v11];
        if ( supportDeckId < 1 )
          break;
        if ( !v13 )
          goto LABEL_13;
        if ( v13->fields.supportDeckId == supportDeckId )
          goto LABEL_9;
LABEL_10:
        if ( (unsigned int)max_length == ++v11 )
          goto LABEL_11;
      }
      if ( !v13 )
LABEL_13:
        sub_1C942F0(v11, v8);
LABEL_9:
      if ( v13->fields.classId == classId )
        return v11;
      goto LABEL_10;
    }
  }
LABEL_11:
  LODWORD(v11) = -1;
  return v11;
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  int32_t max_length; // w8
  ServantLeaderInfo_o *v7; // x8

  if ( index < 0 )
    goto LABEL_8;
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( ServantLeaderInfoByReturnType )
  {
    max_length = ServantLeaderInfoByReturnType->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
        sub_1C942F8(ServantLeaderInfoByReturnType);
      v7 = ServantLeaderInfoByReturnType->m_Items[index];
      if ( v7 )
      {
        LODWORD(ServantLeaderInfoByReturnType) = v7->fields.limitCount;
        return (int)ServantLeaderInfoByReturnType;
      }
    }
LABEL_8:
    LODWORD(ServantLeaderInfoByReturnType) = 0;
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
  int32_t max_length; // w8
  ServantLeaderInfo_o *v7; // x8

  if ( index < 0 )
    goto LABEL_8;
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( ServantLeaderInfoByReturnType )
  {
    max_length = ServantLeaderInfoByReturnType->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
        sub_1C942F8(ServantLeaderInfoByReturnType);
      v7 = ServantLeaderInfoByReturnType->m_Items[index];
      if ( v7 )
      {
        LODWORD(ServantLeaderInfoByReturnType) = v7->fields.lv;
        return (int)ServantLeaderInfoByReturnType;
      }
    }
LABEL_8:
    LODWORD(ServantLeaderInfoByReturnType) = 0;
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
  int32_t max_length; // w8
  ServantLeaderInfo_array *v8; // x20
  Il2CppClass **v9; // x22
  ServantLeaderInfo_o **v10; // x22
  Il2CppClass *v11; // t1
  __int64 v12; // x1

  if ( index < 0 )
    return 0;
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    return 0;
  max_length = ServantLeaderInfoByReturnType->max_length;
  v8 = ServantLeaderInfoByReturnType;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    goto LABEL_11;
  v9 = &ServantLeaderInfoByReturnType->obj.klass + (unsigned int)index;
  v11 = v9[4];
  v10 = (ServantLeaderInfo_o **)(v9 + 4);
  if ( !v11 )
    return 0;
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)Follower__IsNpc(this->fields.type, 0);
  if ( ((unsigned __int8)ServantLeaderInfoByReturnType & 1) != 0 )
    return 0;
  if ( LODWORD(v8->max_length) <= index )
LABEL_11:
    sub_1C942F8(ServantLeaderInfoByReturnType);
  if ( !*v10 )
    sub_1C942F0(0, v12);
  return ServantLeaderInfo__getLevelMax(*v10, 0);
}


// local variable allocation has failed, the output may be wrong!
bool FollowerInfo__getServantEventUpVal(
        FollowerInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v8);
  return ServantLeaderInfo__getServantEventUpVal((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, setupInfo, 0);
}


// local variable allocation has failed, the output may be wrong!
ServantLeaderInfo_o *FollowerInfo__getServantLeaderInfo(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *result; // x0
  int32_t userId; // w8

  if ( index < 0 )
    return 0;
  result = (ServantLeaderInfo_o *)FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !result )
    return result;
  userId = result->fields.userId;
  if ( userId <= index )
    return 0;
  if ( userId <= (unsigned int)index )
    sub_1C942F8(result);
  return (ServantLeaderInfo_o *)*((_QWORD *)&result->fields.classId + (unsigned int)index);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *FollowerInfo__getSkillIdList(
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v6);
  return ServantLeaderInfo__getSkillIdList((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, 0);
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v8);
  ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, skillInfoList, 0);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *FollowerInfo__getSkillLevelList(
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v6);
  return ServantLeaderInfo__getSkillLevelList((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getSvtId(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  int32_t max_length; // w8
  ServantLeaderInfo_o *v9; // x8
  __int64 v10; // x19
  __int64 v11; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4D2C3C8 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C3C8 = 1;
  }
  if ( index < 0 )
    return 0;
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    return 0;
  max_length = ServantLeaderInfoByReturnType->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1C942F8(ServantLeaderInfoByReturnType);
  v9 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v9 )
    return 0;
  v11 = *(_QWORD *)&v9->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&v9->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v11;
  *(_QWORD *)&v13.fields.fakeValue = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v13, 0);
}


// local variable allocation has failed, the output may be wrong!
bool FollowerInfo__getTreasureDeviceInfo(
        FollowerInfo_o *this,
        TreasureDvcInfo_o **tdInfo,
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v8);
  return ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, tdInfo, 0);
}


bool FollowerInfo__getTreasureDeviceInfo_42515128(
        FollowerInfo_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v10; // x1

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    (const MethodInfo *)tdMaxLv);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v10);
  return ServantLeaderInfo__getTreasureDeviceInfo_44363232(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           tdLv,
           tdMaxLv,
           0);
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v6);
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v8);
  return ServantLeaderInfo__getUniqueSvtRestriction(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           questRestrictionInfo,
           0);
}


// local variable allocation has failed, the output may be wrong!
bool FollowerInfo__getUniqueSvtRestriction_42513916(
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
    sub_1C942F8(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1C942F0(ServantLeaderInfoByReturnType, v12);
  return ServantLeaderInfo__getUniqueSvtRestriction_44362056(
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
      sub_1C942F0(result, v4);
  }
  if ( !LODWORD(eventUserSvtLeaderHash->max_length) )
    sub_1C942F8(result);
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
  int32_t v6; // w8
  __int64 v7; // x8

  if ( index < 0 )
    return 0;
  result = (int64_t)FollowerInfo__GetServantLeaderInfoByReturnType(
                      this,
                      returnSupportServantType,
                      *(const MethodInfo **)&returnSupportServantType);
  if ( !result )
    return result;
  v6 = *(_DWORD *)(result + 24);
  if ( v6 <= index )
    return 0;
  if ( v6 <= (unsigned int)index )
    sub_1C942F8(result);
  v7 = *(_QWORD *)(result + 8LL * (unsigned int)index + 32);
  if ( !v7 )
    return 0;
  else
    return *(_QWORD *)(v7 + 40);
}


int32_t FollowerInfo__get_FollowerType(FollowerInfo_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


bool FollowerInfo__get_IsNpc(FollowerInfo_o *this, const MethodInfo *method)
{
  return Follower__IsNpc(this->fields.type, 0);
}


void FollowerInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C3D3 & 1) == 0 )
  {
    sub_1C94098(&FollowerInfo___c_TypeInfo);
    byte_4D2C3D3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(FollowerInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FollowerInfo___c_TypeInfo->static_fields->__9 = (struct FollowerInfo___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)FollowerInfo___c_TypeInfo->static_fields,
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


int32_t FollowerInfo___c___getEquipAtk_b__58_0(
        FollowerInfo___c_o *this,
        EquipTargetInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.atk;
}


int32_t FollowerInfo___c___getEquipHp_b__57_0(FollowerInfo___c_o *this, EquipTargetInfo_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.hp;
}