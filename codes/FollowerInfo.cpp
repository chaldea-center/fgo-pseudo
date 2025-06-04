void __fastcall FollowerInfo___ctor(FollowerInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FollowerInfo__ChangeLimitCountBySpoilerProtection(FollowerInfo_o *this, const MethodInfo *method)
{
  ServantLeaderInfo_o *SpoilerSetting; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v8; // w21
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x19
  int v10; // w8
  unsigned int v11; // w20

  if ( (byte_4B01BD0 & 1) == 0 )
  {
    sub_1BC3008(&OptionManager_TypeInfo, method);
    byte_4B01BD0 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  SpoilerSetting = (ServantLeaderInfo_o *)OptionManager__GetSpoilerSetting(0LL);
  if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
  {
    userSvtLeaderHash = this->fields.userSvtLeaderHash;
    if ( !userSvtLeaderHash )
      goto LABEL_20;
    max_length = userSvtLeaderHash->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( v8 < max_length )
      {
        SpoilerSetting = userSvtLeaderHash->m_Items[v8];
        if ( !SpoilerSetting )
          goto LABEL_20;
        ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
        max_length = userSvtLeaderHash->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_12;
      }
LABEL_19:
      sub_1BC326C(SpoilerSetting, v4, v5);
    }
LABEL_12:
    eventUserSvtLeaderHash = this->fields.eventUserSvtLeaderHash;
    if ( !eventUserSvtLeaderHash )
LABEL_20:
      sub_1BC3264(SpoilerSetting, v4);
    v10 = eventUserSvtLeaderHash->max_length;
    if ( v10 >= 1 )
    {
      v11 = 0;
      while ( v11 < v10 )
      {
        SpoilerSetting = eventUserSvtLeaderHash->m_Items[v11];
        if ( !SpoilerSetting )
          goto LABEL_20;
        ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
        v10 = eventUserSvtLeaderHash->max_length;
        if ( (int)++v11 >= v10 )
          return;
      }
      goto LABEL_19;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerInfo__GetAppendSkillInfo(
        FollowerInfo_o *this,
        SkillInfo_array **skillInfoList,
        int32_t index,
        int32_t returnSupportServantType,
        bool isNpc,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v10; // x1
  __int64 v11; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&index);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v10, v11);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v10);
  ServantLeaderInfo__GetAppendPassiveSkillInfo_42469628(
    (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
    skillInfoList,
    isNpc,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__GetAtkBoostValue(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1
  __int64 v7; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v6, v7);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v6);
  return ServantLeaderInfo__get_AtkBoostValue((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall FollowerInfo__GetEquipSvtIds(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x20
  const MethodInfo *v12; // x2
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x21
  ServantLeaderInfo_o *IsNullOrEmpty; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppClass **v17; // x25
  void **v18; // x25
  Il2CppClass *v19; // t1
  __int64 v20; // x9
  int v21; // w26
  int32_t i; // w22
  __int64 v23; // x23
  __int64 v24; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  struct System_Int32_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  System_Collections_Generic_List_int__o *v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B01BCB & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_4B01BCB = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(this, returnSupportServantType, v12);
  IsNullOrEmpty = (ServantLeaderInfo_o *)BasicHelper__IsNullOrEmpty(
                                           (System_Collections_ICollection_o *)ServantLeaderInfoByReturnType,
                                           0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !ServantLeaderInfoByReturnType )
LABEL_31:
      sub_1BC3264(IsNullOrEmpty, v15);
    if ( ServantLeaderInfoByReturnType->max_length <= index )
LABEL_32:
      sub_1BC326C(IsNullOrEmpty, v15, v16);
    v17 = &ServantLeaderInfoByReturnType->obj.klass + index;
    v19 = v17[4];
    v18 = (void **)(v17 + 4);
    if ( v19 )
    {
      IsNullOrEmpty = (ServantLeaderInfo_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        IsNullOrEmpty = (ServantLeaderInfo_o *)BalanceConfig_TypeInfo;
      }
      v20 = 48LL;
      if ( returnSupportServantType == 2 )
        v20 = 52LL;
      v21 = *(_DWORD *)(*(_QWORD *)&IsNullOrEmpty->fields.commandCardLimitCount + v20);
      if ( v21 >= 1 )
      {
        for ( i = 0; v21 != i; ++i )
        {
          if ( ServantLeaderInfoByReturnType->max_length <= index )
            goto LABEL_32;
          IsNullOrEmpty = (ServantLeaderInfo_o *)*v18;
          if ( !*v18 )
            goto LABEL_31;
          IsNullOrEmpty = (ServantLeaderInfo_o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(IsNullOrEmpty, i, 0LL);
          if ( IsNullOrEmpty )
          {
            v24 = *(_QWORD *)&IsNullOrEmpty->fields.svtId.fields.fakeValue;
            v23 = *(_QWORD *)&IsNullOrEmpty->fields.limitCount;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v34.fields.currentCryptoKey = v24;
            *(_QWORD *)&v34.fields.fakeValue = v23;
            IsNullOrEmpty = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                     v34,
                                                     0LL);
            if ( !v11 )
              goto LABEL_31;
            items = v11->fields._items;
            v26 = Method_System_Collections_Generic_List_int__Add__;
            ++v11->fields._version;
            if ( !items )
              goto LABEL_31;
            size = v11->fields._size;
            v15 = (unsigned int)IsNullOrEmpty;
            if ( (unsigned int)size >= items->max_length )
            {
              v31 = v26[4];
              v32 = v11;
LABEL_28:
              System_Collections_Generic_List_int___AddWithResize(
                v32,
                v15,
                *(const MethodInfo_3683E1C **)(*(_QWORD *)(v31 + 192) + 112LL));
              continue;
            }
            v11->fields._size = size + 1;
            items->m_Items[size + 1] = (int)IsNullOrEmpty;
          }
          else
          {
            if ( !v11 )
              goto LABEL_31;
            v28 = v11->fields._items;
            v29 = Method_System_Collections_Generic_List_int__Add__;
            ++v11->fields._version;
            if ( !v28 )
              goto LABEL_31;
            v30 = v11->fields._size;
            if ( (unsigned int)v30 >= v28->max_length )
            {
              v31 = v29[4];
              v32 = v11;
              LODWORD(v15) = 0;
              goto LABEL_28;
            }
            v11->fields._size = v30 + 1;
            v28->m_Items[v30 + 1] = 0;
          }
        }
      }
    }
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
EquipTargetInfo_o *__fastcall FollowerInfo__GetEquipTargetByEquipIdx(
        FollowerInfo_o *this,
        int32_t servantLeaderIndex,
        int32_t returnSupportServantType,
        int32_t equipIndex,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t max_length; // w8
  ServantLeaderInfo_o *v11; // x0

  if ( (servantLeaderIndex & 0x80000000) != 0 )
    return 0LL;
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    return 0LL;
  max_length = ServantLeaderInfoByReturnType->max_length;
  if ( max_length <= servantLeaderIndex )
    return 0LL;
  if ( max_length <= (unsigned int)servantLeaderIndex )
    sub_1BC326C(ServantLeaderInfoByReturnType, v8, v9);
  v11 = ServantLeaderInfoByReturnType->m_Items[servantLeaderIndex];
  if ( v11 )
    return ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(v11, equipIndex, 0LL);
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *__fastcall FollowerInfo__GetFriendPointUpTypeVals(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1
  __int64 v7; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v6, v7);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v6);
  return ServantLeaderInfo__GetFriendPointUpTypeVals((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UserServantGrandInfo_o *__fastcall FollowerInfo__GetGrandServantInfo(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Object_array *ServantLeaderInfoByReturnType; // x0
  Il2CppObject *v9; // x0
  UserServantGrandInfo_o *result; // x0
  UserServantGrandInfo_c *v11; // x0

  if ( (byte_4B01BC8 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_IndexValue_ServantLeaderInfo___, *(_QWORD *)&index);
    sub_1BC3008(&UserServantGrandInfo_TypeInfo, v7);
    byte_4B01BC8 = 1;
  }
  ServantLeaderInfoByReturnType = (System_Object_array *)FollowerInfo__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&returnSupportServantType);
  v9 = BasicHelper__IndexValue_object_(
         ServantLeaderInfoByReturnType,
         index,
         0LL,
         (const MethodInfo_2FF04DC *)Method_BasicHelper_IndexValue_ServantLeaderInfo___);
  if ( !v9 || (result = ServantLeaderInfo__get_GrandInfo((ServantLeaderInfo_o *)v9, 0LL)) == 0LL )
  {
    v11 = UserServantGrandInfo_TypeInfo;
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
      v11 = UserServantGrandInfo_TypeInfo;
    }
    return v11->static_fields->Empty;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__GetHpBoostValue(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1
  __int64 v7; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v6, v7);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v6);
  return ServantLeaderInfo__get_HpBoostValue((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall FollowerInfo__GetNpcServantIndividuality(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v19; // x23
  Il2CppObject *v20; // x22
  const MethodInfo *v21; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v22; // x25
  struct System_Byte_array *masterDataBytes; // x26
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x27
  int32_t v25; // w0
  int32_t currentCryptoKey; // w26
  int32_t hiddenValue; // w28
  int32_t v28; // w27
  System_Int32_array *LimitAddIndividuality; // x24
  System_Int32_array *Individuality; // x23
  FollowerInfo_o *v31; // x0
  const MethodInfo *v32; // x3
  FollowerInfo_o *UnionIndividuality; // x0
  const MethodInfo *v34; // x3
  System_Int32_array *v35; // x23
  const MethodInfo *v36; // x3
  FollowerInfo_o *ServantBaseIndividuality; // x0
  const MethodInfo *v38; // x3
  System_Int32_array *v39; // x20
  FollowerInfo_o *AddIndividuality; // x0
  const MethodInfo *v41; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4B01BC5 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, *(_QWORD *)&index);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantIndividualityMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v9);
    sub_1BC3008(&DataManager_TypeInfo, v10);
    sub_1BC3008(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v11);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v12);
    sub_1BC3008(&int___TypeInfo, v13);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B01BC5 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantIndividualityMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  v20 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
  Instance = (DataManager_o *)FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, v21);
  if ( !Instance )
    goto LABEL_21;
  v22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance;
  lookup = Instance->fields.lookup;
  masterDataBytes = Instance->fields.masterDataBytes;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = lookup;
  *(_QWORD *)&v44.fields.fakeValue = masterDataBytes;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v44, 0LL);
  currentCryptoKey = v22[4].fields.currentCryptoKey;
  hiddenValue = v22[11].fields.hiddenValue;
  v28 = v25;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__ConvertDispLimitCountForClient(hiddenValue, 0LL);
  if ( !MasterData_object )
    goto LABEL_21;
  LimitAddIndividuality = ServantLimitAddMaster__GetLimitAddIndividuality(
                            (ServantLimitAddMaster_o *)MasterData_object,
                            v28,
                            currentCryptoKey,
                            (int32_t)Instance,
                            0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v22[3], 0LL);
  if ( !v19 )
    goto LABEL_21;
  Individuality = ServantIndividualityMaster__GetIndividuality(
                    (ServantIndividualityMaster_o *)v19,
                    (int32_t)Instance,
                    v22[4].fields.currentCryptoKey,
                    0LL);
  v31 = (FollowerInfo_o *)sub_1BC30B0(int___TypeInfo, 0LL);
  UnionIndividuality = (FollowerInfo_o *)FollowerInfo__GetUnionIndividuality(
                                           v31,
                                           (System_Int32_array *)v31,
                                           LimitAddIndividuality,
                                           v32);
  v35 = FollowerInfo__GetUnionIndividuality(
          UnionIndividuality,
          (System_Int32_array *)UnionIndividuality,
          Individuality,
          v34);
  ServantBaseIndividuality = (FollowerInfo_o *)FollowerInfo__GetServantBaseIndividuality(
                                                 this,
                                                 index,
                                                 returnSupportServantType,
                                                 v36);
  Instance = (DataManager_o *)FollowerInfo__GetUnionIndividuality(
                                ServantBaseIndividuality,
                                v35,
                                (System_Int32_array *)ServantBaseIndividuality,
                                v38);
  if ( !v20 )
    goto LABEL_21;
  v39 = (System_Int32_array *)Instance;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v20,
         &entity,
         this->fields.npcFollowerSvtId,
         (const MethodInfo_32B1618 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
    {
      AddIndividuality = (FollowerInfo_o *)NpcServantFollowerIndividualityEntity__GetAddIndividuality(
                                             (NpcServantFollowerIndividualityEntity_o *)entity,
                                             0LL);
      Instance = (DataManager_o *)FollowerInfo__GetUnionIndividuality(
                                    AddIndividuality,
                                    v39,
                                    (System_Int32_array *)AddIndividuality,
                                    v41);
      if ( entity )
        return NpcServantFollowerIndividualityEntity__GetExcludedIndividuality(
                 (NpcServantFollowerIndividualityEntity_o *)entity,
                 (System_Int32_array *)Instance,
                 0LL);
    }
LABEL_21:
    sub_1BC3264(Instance, v17);
  }
  return v39;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall FollowerInfo__GetNpcServantIndividualityFull(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  const MethodInfo *v19; // x3
  ServantLeaderInfo_o *ServantLeaderInfo; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x20
  __int64 v22; // x21
  __int64 v23; // x22
  Il2CppObject *v24; // x0
  int32_t limitCount; // w20
  int32_t dispLimitCount; // w21
  ServantEntity_o *v27; // x19
  Il2CppObject *v28; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4B01BC6 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___, *(_QWORD *)&index);
    sub_1BC3008(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1BC3008(&DataManager_TypeInfo, v9);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BC3008(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v11);
    sub_1BC3008(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v12);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v13);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    byte_4B01BC6 = 1;
  }
  v28 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !Master_object )
    goto LABEL_27;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v28,
         this->fields.npcFollowerSvtId,
         (const MethodInfo_32B1618 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    return FollowerInfo__GetNpcServantIndividuality(this, index, returnSupportServantType, v17);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  if ( !Master_object )
    goto LABEL_27;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         this->fields.npcFollowerSvtId,
         (const MethodInfo_32B1618 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
  {
    Master_object = entity;
    if ( !entity )
      goto LABEL_27;
    if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)entity, 0LL) )
    {
      Master_object = entity;
      if ( entity )
        return NpcServantFollowerEntity__GetOverwriteIndividuality((NpcServantFollowerEntity_o *)entity, 0LL);
LABEL_27:
      sub_1BC3264(Master_object, v16);
    }
  }
  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, v19);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !ServantLeaderInfo )
    goto LABEL_27;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v23 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = v23;
  *(_QWORD *)&v30.fields.fakeValue = v22;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v30, 0LL);
  if ( !v21 )
    goto LABEL_27;
  v24 = DataMasterBase_object__object__int___GetEntity(
          v21,
          (int32_t)Master_object,
          (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  limitCount = ServantLeaderInfo->fields.limitCount;
  dispLimitCount = ServantLeaderInfo->fields.dispLimitCount;
  v27 = (ServantEntity_o *)v24;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Master_object = (Il2CppObject *)ImageLimitCount__ConvertDispLimitCountForClient(dispLimitCount, 0LL);
  if ( !v27 )
    goto LABEL_27;
  return ServantEntity__getIndividuality(v27, limitCount, (int32_t)Master_object, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__GetQuestRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x20
  System_Int32_array *IsNpc; // x0
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
  IsNpc = (System_Int32_array *)Follower__IsNpc(this->fields.type, 0LL);
  if ( ((unsigned __int8)IsNpc & 1) == 0 )
  {
    if ( ServantLeaderInfo )
      return ServantLeaderInfo__getQuestRestriction(ServantLeaderInfo, questRestrictionInfo, 0LL);
LABEL_10:
    sub_1BC3264(IsNpc, v11);
  }
  IsNpc = FollowerInfo__GetNpcServantIndividualityFull(this, index, returnSupportServantType, v12);
  if ( !ServantLeaderInfo )
    goto LABEL_10;
  v13 = IsNpc;
  IsNpc = (System_Int32_array *)ServantLeaderInfo__GetOverwriteStatus(ServantLeaderInfo, 0LL);
  if ( !IsNpc )
    goto LABEL_10;
  return QuestRestrictionInfo__IsRestriction_42392960(
           questRestrictionInfo,
           &isWhole,
           v13,
           IsNpc->max_length,
           ServantLeaderInfo->fields.lv,
           3,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__GetQuestRestriction_40767932(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        int32_t initPos,
        bool *isWhole,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x22
  System_Int32_array *IsNpc; // x0
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

  if ( (byte_4B01BCE & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4B01BCE = 1;
  }
  if ( questRestrictionInfo )
  {
    ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(
                          this,
                          index,
                          returnSupportServantType,
                          *(const MethodInfo **)&returnSupportServantType);
    IsNpc = (System_Int32_array *)Follower__IsNpc(this->fields.type, 0LL);
    if ( ((unsigned __int8)IsNpc & 1) != 0 )
    {
      IsNpc = FollowerInfo__GetNpcServantIndividualityFull(this, index, returnSupportServantType, v16);
      if ( ServantLeaderInfo )
      {
        v17 = IsNpc;
        IsNpc = (System_Int32_array *)ServantLeaderInfo__GetOverwriteStatus(ServantLeaderInfo, 0LL);
        if ( IsNpc )
          return QuestRestrictionInfo__IsRestriction_42394212(
                   questRestrictionInfo,
                   isWhole,
                   v17,
                   IsNpc->max_length,
                   ServantLeaderInfo->fields.lv,
                   initPos,
                   3,
                   0LL);
      }
LABEL_14:
      sub_1BC3264(IsNpc, v15);
    }
    if ( !ServantLeaderInfo )
      goto LABEL_14;
    v20 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = v20;
    *(_QWORD *)&v25.fields.fakeValue = v19;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v25, 0LL);
    limitCount = ServantLeaderInfo->fields.limitCount;
    v23 = v21;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(ServantLeaderInfo, 0LL);
    IsNpc = (System_Int32_array *)ServantLeaderInfo__GetOverwriteStatus(ServantLeaderInfo, 0LL);
    if ( !IsNpc )
      goto LABEL_14;
    return QuestRestrictionInfo__IsRestriction_42393932(
             questRestrictionInfo,
             isWhole,
             v23,
             limitCount,
             DispLimitCount,
             IsNpc->max_length,
             ServantLeaderInfo->fields.lv,
             initPos,
             2,
             0LL);
  }
  else
  {
    result = 0;
    *isWhole = 0;
  }
  return result;
}


int32_t __fastcall FollowerInfo__GetReturnTypeByQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B01BC0 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B01BC0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  return Entity && QuestEntity__IsNeedUseEventQuestSupport((QuestEntity_o *)Entity, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall FollowerInfo__GetServantBaseIndividuality(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Int32_array *result; // x0
  System_Int32_array *v11; // x21
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  __int64 v17; // x19
  __int64 v18; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B01BC3 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&index);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B01BC3 = 1;
  }
  if ( (index & 0x80000000) != 0 )
    return 0LL;
  result = (System_Int32_array *)FollowerInfo__GetServantLeaderInfoByReturnType(
                                   this,
                                   returnSupportServantType,
                                   *(const MethodInfo **)&returnSupportServantType);
  if ( !result )
    return result;
  v11 = result;
  if ( (signed int)result->max_length <= index )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( v11->max_length <= index )
    sub_1BC326C(Instance, v13, v14);
  v15 = *(_QWORD *)&v11->m_Items[2 * index + 1];
  if ( !v15 )
    goto LABEL_16;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v18 = *(_QWORD *)(v15 + 48);
  v17 = *(_QWORD *)(v15 + 56);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v18;
  *(_QWORD *)&v19.fields.fakeValue = v17;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v19, 0LL);
  if ( !v16
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v16,
                     (int32_t)Instance,
                     (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_16:
    sub_1BC3264(Instance, v13);
  }
  return (System_Int32_array *)Instance[11].klass;
}


// local variable allocation has failed, the output may be wrong!
ServantLeaderInfo_array *__fastcall FollowerInfo__GetServantLeaderInfoByReturnType(
        FollowerInfo_o *this,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v8; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B01BC1 & 1) == 0 )
  {
    sub_1BC3008(&FollowerInfo_ReturnSupportServantType_TypeInfo, *(_QWORD *)&returnSupportServantType);
    byte_4B01BC1 = 1;
  }
  if ( returnSupportServantType == 2 )
    return this->fields.userSvtGrandHash;
  if ( returnSupportServantType == 1 )
    return this->fields.eventUserSvtLeaderHash;
  if ( returnSupportServantType )
  {
    v9 = returnSupportServantType;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(FollowerInfo_ReturnSupportServantType_TypeInfo, &v9, method, v3, v4);
    PrivateImplementationDetails___ThrowSwitchExpressionException(v8, 0LL);
  }
  return this->fields.userSvtLeaderHash;
}


System_Int32_array *__fastcall FollowerInfo__GetUnionIndividuality(
        FollowerInfo_o *this,
        System_Int32_array *targetIndividualities,
        System_Int32_array *addIndividualities,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0

  if ( (byte_4B01BC4 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, targetIndividualities);
    sub_1BC3008(&Method_System_Linq_Enumerable_Union_int___, v6);
    byte_4B01BC4 = 1;
  }
  if ( !addIndividualities || !*(_QWORD *)&addIndividualities->max_length )
    return targetIndividualities;
  v7 = System_Linq_Enumerable__Union_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)targetIndividualities,
         (System_Collections_Generic_IEnumerable_TSource__o *)addIndividualities,
         (const MethodInfo_304329C *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v7,
           (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall FollowerInfo__GetUseStatus(FollowerInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x8
  __int64 v4; // x9
  UserRecommendSupportInfo_o *v5; // x8

  userRecommendSupportHash = this->fields.userRecommendSupportHash;
  if ( !userRecommendSupportHash )
    return 0;
  v4 = *(_QWORD *)&userRecommendSupportHash->max_length;
  if ( !v4 )
    return 0;
  if ( !(_DWORD)v4 )
    sub_1BC326C(this, method, v2);
  v5 = userRecommendSupportHash->m_Items[0];
  if ( v5 )
    return v5->fields.useStatus;
  else
    return 0;
}


UserRecommendSupportInfo_array *__fastcall FollowerInfo__GetUserRecommendSupportInfo(
        FollowerInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.userRecommendSupportHash;
}


bool __fastcall FollowerInfo__IsClassRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  ServantLeaderInfo_o *ServantLeaderInfo; // x21
  Il2CppObject *Master_object; // x0
  __int64 v18; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x20
  __int64 v20; // x21
  __int64 v21; // x22
  Il2CppObject *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B01BCF & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantClassMaster___, questRestrictionInfo);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1BC3008(&DataManager_TypeInfo, v10);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1BC3008(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v12);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    byte_4B01BCF = 1;
  }
  if ( !questRestrictionInfo || Follower__IsNpc(this->fields.type, 0LL) )
    return 0;
  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, v14);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !ServantLeaderInfo )
    goto LABEL_16;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v21 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v21;
  *(_QWORD *)&v23.fields.fakeValue = v20;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v23, 0LL);
  if ( !v19
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v19,
                   (int32_t)Master_object,
                   (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantClassMaster___),
        !Entity)
    || !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          (int32_t)Entity[5].klass,
                          (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL )
  {
LABEL_16:
    sub_1BC3264(Master_object, v18);
  }
  return QuestRestrictionInfo__IsClassRestriction(questRestrictionInfo, (int32_t)Master_object[2].klass, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__IsGrandServant(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t max_length; // w8
  ServantLeaderInfo_o *v9; // x0

  if ( (index & 0x80000000) != 0 )
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
    sub_1BC326C(ServantLeaderInfoByReturnType, v6, v7);
  v9 = ServantLeaderInfoByReturnType->m_Items[index];
  return v9 && ServantLeaderInfo__get_IsGrandSvt(v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__IsSlotRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v8; // x1
  __int64 v9; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&index);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v8, v9);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v8);
  return ServantLeaderInfo__IsSlotRestriction(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           questRestrictionInfo,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__IsUniqueIndividualityRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v9; // x1
  __int64 v10; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&index);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v9, v10);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v9);
  return ServantLeaderInfo__IsUniqueIndividualityRestriction(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           questRestrictionInfo,
           this,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__IsUniqueIndividualityRestriction_40768600(
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
  __int64 v14; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&index);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v13, v14);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v13);
  return ServantLeaderInfo__IsUniqueIndividualityRestriction_42459132(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           questRestrictionInfo,
           partyItem,
           num,
           this,
           0LL);
}


void __fastcall FollowerInfo__SetEquipInfoForNpc(
        FollowerInfo_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  FollowerInfo_o *v5; // x20
  const MethodInfo *v7; // x3
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x8

  userSvtLeaderHash = this->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    goto LABEL_8;
  if ( !userSvtLeaderHash->max_length )
    goto LABEL_9;
  v5 = this;
  this = (FollowerInfo_o *)userSvtLeaderHash->m_Items[0];
  if ( !this
    || (this->fields.followerClassStatistics = (struct ClassStatisticsInfo_array *)equipTargetInfo,
        sub_1BC2FAC(
          (CGThumbnailListItem_o *)&this->fields.followerClassStatistics,
          (int32_t)equipTargetInfo,
          (int32_t)method,
          v3),
        (eventUserSvtLeaderHash = v5->fields.eventUserSvtLeaderHash) == 0LL) )
  {
LABEL_8:
    sub_1BC3264(this, equipTargetInfo);
  }
  if ( !eventUserSvtLeaderHash->max_length )
LABEL_9:
    sub_1BC326C(this, equipTargetInfo, method);
  this = (FollowerInfo_o *)eventUserSvtLeaderHash->m_Items[0];
  if ( !this )
    goto LABEL_8;
  this->fields.followerClassStatistics = (struct ClassStatisticsInfo_array *)equipTargetInfo;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.followerClassStatistics,
    (int32_t)equipTargetInfo,
    (int32_t)method,
    v7);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getAdjustAtk(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  ServantLeaderInfo_o *v8; // x8

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v6, v7);
  v8 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v8 )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v6);
  return v8->fields.adjustAtk;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getAdjustHp(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  ServantLeaderInfo_o *v8; // x8

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v6, v7);
  v8 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v8 )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v6);
  return v8->fields.adjustHp;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getAtk(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  ServantLeaderInfo_o *v8; // x8

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v6, v7);
  v8 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v8 )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v6);
  return v8->fields.atk;
}


int32_t __fastcall FollowerInfo__getCardImageLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getCardImageLimitCount(ServantLeaderInfo, 0LL);
  return (int)ServantLeaderInfo;
}


int32_t __fastcall FollowerInfo__getCommandCardLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getCommandCardLimitCount(ServantLeaderInfo, 0LL);
  return (int)ServantLeaderInfo;
}


System_Int32_array *__fastcall FollowerInfo__getCommandCodeIdList(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0

  result = (System_Int32_array *)FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( result )
    return ServantLeaderInfo__getCommandCodeIdList((ServantLeaderInfo_o *)result, 0LL);
  return result;
}


int32_t __fastcall FollowerInfo__getDispLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getDispLimitCount(ServantLeaderInfo, 0LL);
  return (int)ServantLeaderInfo;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getEquipAtk(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x0
  FollowerInfo___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__int__o *_9__58_0; // x20
  Il2CppObject *v15; // x21
  struct FollowerInfo___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4B01BCD & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Sum_EquipTargetInfo___, *(_QWORD *)&index);
    sub_1BC3008(&System_Func_EquipTargetInfo__int__TypeInfo, v7);
    sub_1BC3008(&Method_FollowerInfo___c__getEquipAtk_b__58_0__, v8);
    sub_1BC3008(&FollowerInfo___c_TypeInfo, v9);
    byte_4B01BCD = 1;
  }
  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
  {
    EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(ServantLeaderInfo, 0LL);
    v12 = FollowerInfo___c_TypeInfo;
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)EquipTargetInfoList;
    if ( !FollowerInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerInfo___c_TypeInfo);
      v12 = FollowerInfo___c_TypeInfo;
    }
    _9__58_0 = (System_Func_object__int__o *)v12->static_fields->__9__58_0;
    if ( !_9__58_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = FollowerInfo___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__58_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_EquipTargetInfo__int__TypeInfo);
      System_Func_object__int____ctor(_9__58_0, v15, Method_FollowerInfo___c__getEquipAtk_b__58_0__, 0LL);
      static_fields = FollowerInfo___c_TypeInfo->static_fields;
      static_fields->__9__58_0 = (struct System_Func_EquipTargetInfo__int__o *)_9__58_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v17, v18);
    }
    LODWORD(ServantLeaderInfo) = System_Linq_Enumerable__Sum_object_(
                                   v13,
                                   (System_Func_TSource__int__o *)_9__58_0,
                                   (const MethodInfo_303D0CC *)Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
  }
  return (int)ServantLeaderInfo;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__getEquipEventUpVal(
        FollowerInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v8; // x1
  __int64 v9; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&index);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v8, v9);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v8);
  return ServantLeaderInfo__getEquipEventUpVal((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, setupInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getEquipHp(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x0
  FollowerInfo___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__int__o *_9__57_0; // x20
  Il2CppObject *v15; // x21
  struct FollowerInfo___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4B01BCC & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Sum_EquipTargetInfo___, *(_QWORD *)&index);
    sub_1BC3008(&System_Func_EquipTargetInfo__int__TypeInfo, v7);
    sub_1BC3008(&Method_FollowerInfo___c__getEquipHp_b__57_0__, v8);
    sub_1BC3008(&FollowerInfo___c_TypeInfo, v9);
    byte_4B01BCC = 1;
  }
  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
  {
    EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(ServantLeaderInfo, 0LL);
    v12 = FollowerInfo___c_TypeInfo;
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)EquipTargetInfoList;
    if ( !FollowerInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerInfo___c_TypeInfo);
      v12 = FollowerInfo___c_TypeInfo;
    }
    _9__57_0 = (System_Func_object__int__o *)v12->static_fields->__9__57_0;
    if ( !_9__57_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = FollowerInfo___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__57_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_EquipTargetInfo__int__TypeInfo);
      System_Func_object__int____ctor(_9__57_0, v15, Method_FollowerInfo___c__getEquipHp_b__57_0__, 0LL);
      static_fields = FollowerInfo___c_TypeInfo->static_fields;
      static_fields->__9__57_0 = (struct System_Func_EquipTargetInfo__int__o *)_9__57_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v17, v18);
    }
    LODWORD(ServantLeaderInfo) = System_Linq_Enumerable__Sum_object_(
                                   v13,
                                   (System_Func_TSource__int__o *)_9__57_0,
                                   (const MethodInfo_303D0CC *)Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
  }
  return (int)ServantLeaderInfo;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getEquipLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t equipIndex,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v8; // x1
  __int64 v9; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&equipIndex);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v8, v9);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v8);
  return ServantLeaderInfo__GetEquipLimitCount((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, equipIndex, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getEquipSvtId(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t max_length; // w8
  ServantLeaderInfo_o *v11; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v13; // x19
  __int64 v14; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B01BCA & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&index);
    byte_4B01BCA = 1;
  }
  if ( (index & 0x80000000) != 0 )
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
    sub_1BC326C(ServantLeaderInfoByReturnType, v8, v9);
  v11 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v11 )
    return 0;
  equipTarget1 = v11->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0;
  v14 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v14;
  *(_QWORD *)&v16.fields.fakeValue = v13;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EquipTargetInfo_o *__fastcall FollowerInfo__getEquipTarget1(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  EquipTargetInfo_o *result; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t currentCryptoKey; // w8
  __int64 v9; // x8

  if ( (index & 0x80000000) != 0 )
    return 0LL;
  result = (EquipTargetInfo_o *)FollowerInfo__GetServantLeaderInfoByReturnType(
                                  this,
                                  returnSupportServantType,
                                  *(const MethodInfo **)&returnSupportServantType);
  if ( !result )
    return result;
  currentCryptoKey = result->fields.userSvtId.fields.currentCryptoKey;
  if ( currentCryptoKey <= index )
    return 0LL;
  if ( currentCryptoKey <= (unsigned int)index )
    sub_1BC326C(result, v6, v7);
  v9 = *(&result->fields.userSvtId.fields.hiddenValue + (unsigned int)index);
  if ( !v9 )
    return 0LL;
  else
    return *(EquipTargetInfo_o **)(v9 + 144);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall FollowerInfo__getEquipUserSvtId(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  int64_t result; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t v10; // w8
  __int64 v11; // x8
  __int64 v12; // x8
  __int128 v13; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]

  if ( (byte_4B01BC9 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&index);
    byte_4B01BC9 = 1;
  }
  if ( (index & 0x80000000) != 0 )
    return 0LL;
  result = (int64_t)FollowerInfo__GetServantLeaderInfoByReturnType(
                      this,
                      returnSupportServantType,
                      *(const MethodInfo **)&returnSupportServantType);
  if ( !result )
    return result;
  v10 = *(_DWORD *)(result + 24);
  if ( v10 <= index )
    return 0LL;
  if ( v10 <= (unsigned int)index )
    sub_1BC326C(result, v8, v9);
  v11 = *(_QWORD *)(result + 8LL * (unsigned int)index + 32);
  if ( !v11 )
    return 0LL;
  v12 = *(_QWORD *)(v11 + 144);
  if ( !v12 )
    return 0LL;
  v13 = *(_OWORD *)(v12 + 40);
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)(v12 + 24);
  *(_OWORD *)&v15.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__getEventUpVal(
        FollowerInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v8; // x1
  __int64 v9; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&index);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v8, v9);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v8);
  return ServantLeaderInfo__getEventUpVal((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, setupInfo, 0LL);
}


bool __fastcall FollowerInfo__getEventUpVal_40767524(
        FollowerInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v10; // x1
  __int64 v11; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    (const MethodInfo *)setupInfo);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v10, v11);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v10);
  return ServantLeaderInfo__getEventUpVal_42457020(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           eventUpVallInfo,
           setupInfo,
           0LL);
}


bool __fastcall FollowerInfo__getEventUpVal_40767612(
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
  __int64 v15; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    (const MethodInfo *)isServantEventUpVal);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v14, v15);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v14);
  return ServantLeaderInfo__getEventUpVal_42458008(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           eventUpVallInfo,
           isServantEventUpVal,
           isEquipEventUpVal,
           setupInfo,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getExceedCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t max_length; // w8
  ServantLeaderInfo_o *v9; // x8

  if ( (index & 0x80000000) != 0 )
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
        sub_1BC326C(ServantLeaderInfoByReturnType, v6, v7);
      v9 = ServantLeaderInfoByReturnType->m_Items[index];
      if ( v9 )
      {
        LODWORD(ServantLeaderInfoByReturnType) = v9->fields.exceedCount;
        return (int)ServantLeaderInfoByReturnType;
      }
    }
LABEL_8:
    LODWORD(ServantLeaderInfoByReturnType) = 0;
  }
  return (int)ServantLeaderInfoByReturnType;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getExp(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  ServantLeaderInfo_o *v8; // x8

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v6, v7);
  v8 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v8 )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v6);
  return v8->fields.exp;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getHp(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  ServantLeaderInfo_o *v8; // x8

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v6, v7);
  v8 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v8 )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v6);
  return v8->fields.hp;
}


int32_t __fastcall FollowerInfo__getIconImageLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getIconLimitCount(ServantLeaderInfo, 0LL);
  return (int)ServantLeaderInfo;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getIndex(
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
  __int64 v15; // x2
  __int64 v16; // x8
  __int64 v17; // x24
  __int64 v18; // x27
  ServantLeaderInfo_o *v19; // x8
  __int64 v20; // x25
  __int64 v21; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B01BC2 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classId);
    byte_4B01BC2 = 1;
  }
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_24;
  v12 = ServantLeaderInfoByReturnType;
  IsNpc = Follower__IsNpc(this->fields.type, 0LL);
  v16 = *(_QWORD *)&v12->max_length;
  if ( (IsNpc & 1) == 0 )
  {
    if ( (int)v16 < 1 )
      goto LABEL_24;
    v17 = 0LL;
    v18 = (unsigned int)*(_QWORD *)&v12->max_length - 1LL;
    while ( 1 )
    {
      v19 = v12->m_Items[v17];
      if ( supportDeckId < 1 )
      {
        if ( !v19 )
LABEL_26:
          sub_1BC3264(IsNpc, v14);
      }
      else
      {
        if ( !v19 )
          goto LABEL_26;
        if ( v19->fields.supportDeckId != supportDeckId )
          goto LABEL_21;
      }
      if ( returnSupportServantType == 2 )
      {
        if ( v19->fields.grandGraphId == grandGraphId )
          return v17;
      }
      else if ( v19->fields.classId == classId )
      {
        v21 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
        v20 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v23.fields.currentCryptoKey = v21;
        *(_QWORD *)&v23.fields.fakeValue = v20;
        IsNpc = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v23, 0LL);
        if ( (int)IsNpc > 0 )
          return v17;
      }
LABEL_21:
      if ( v18 == v17 )
        goto LABEL_24;
      if ( ++v17 >= (unsigned __int64)v12->max_length )
        sub_1BC326C(IsNpc, v14, v15);
    }
  }
  if ( !v16 )
  {
LABEL_24:
    LODWORD(v17) = -1;
    return v17;
  }
  LODWORD(v17) = 0;
  return v17;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getIndexForSupport(
        FollowerInfo_o *this,
        int32_t classId,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v8; // x1
  __int64 v9; // x9
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
    v9 = *(_QWORD *)&ServantLeaderInfoByReturnType->max_length;
    v10 = ServantLeaderInfoByReturnType;
    if ( (int)v9 >= 1 )
    {
      v11 = 0LL;
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
        if ( (unsigned int)v9 == ++v11 )
          goto LABEL_11;
      }
      if ( !v13 )
LABEL_13:
        sub_1BC3264(v11, v8);
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
int32_t __fastcall FollowerInfo__getLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t max_length; // w8
  ServantLeaderInfo_o *v9; // x8

  if ( (index & 0x80000000) != 0 )
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
        sub_1BC326C(ServantLeaderInfoByReturnType, v6, v7);
      v9 = ServantLeaderInfoByReturnType->m_Items[index];
      if ( v9 )
      {
        LODWORD(ServantLeaderInfoByReturnType) = v9->fields.limitCount;
        return (int)ServantLeaderInfoByReturnType;
      }
    }
LABEL_8:
    LODWORD(ServantLeaderInfoByReturnType) = 0;
  }
  return (int)ServantLeaderInfoByReturnType;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getLv(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t max_length; // w8
  ServantLeaderInfo_o *v9; // x8

  if ( (index & 0x80000000) != 0 )
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
        sub_1BC326C(ServantLeaderInfoByReturnType, v6, v7);
      v9 = ServantLeaderInfoByReturnType->m_Items[index];
      if ( v9 )
      {
        LODWORD(ServantLeaderInfoByReturnType) = v9->fields.lv;
        return (int)ServantLeaderInfoByReturnType;
      }
    }
LABEL_8:
    LODWORD(ServantLeaderInfoByReturnType) = 0;
  }
  return (int)ServantLeaderInfoByReturnType;
}


int32_t __fastcall FollowerInfo__getMaxCardImageLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getMaxCardImageLimitCount(ServantLeaderInfo, 0, 0LL);
  return (int)ServantLeaderInfo;
}


int32_t __fastcall FollowerInfo__getMaxCommandCardLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getMaxCommandCardLimitCount(ServantLeaderInfo, 0LL);
  return (int)ServantLeaderInfo;
}


int32_t __fastcall FollowerInfo__getMaxDispLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getMaxDispLimitCount(ServantLeaderInfo, 0LL);
  return (int)ServantLeaderInfo;
}


int32_t __fastcall FollowerInfo__getMaxIconLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getMaxIconLimitCount(ServantLeaderInfo, 0, 0LL);
  return (int)ServantLeaderInfo;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getMaxLv(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t max_length; // w8
  ServantLeaderInfo_array *v10; // x20
  Il2CppClass **v11; // x22
  ServantLeaderInfo_o **v12; // x22
  Il2CppClass *v13; // t1

  if ( (index & 0x80000000) != 0 )
    return 0;
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    return 0;
  max_length = ServantLeaderInfoByReturnType->max_length;
  v10 = ServantLeaderInfoByReturnType;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    goto LABEL_11;
  v11 = &ServantLeaderInfoByReturnType->obj.klass + (unsigned int)index;
  v13 = v11[4];
  v12 = (ServantLeaderInfo_o **)(v11 + 4);
  if ( !v13 )
    return 0;
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)Follower__IsNpc(this->fields.type, 0LL);
  if ( ((unsigned __int8)ServantLeaderInfoByReturnType & 1) != 0 )
    return 0;
  if ( v10->max_length <= index )
LABEL_11:
    sub_1BC326C(ServantLeaderInfoByReturnType, v7, v8);
  if ( !*v12 )
    sub_1BC3264(0LL, v7);
  return ServantLeaderInfo__getLevelMax(*v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__getServantEventUpVal(
        FollowerInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v8; // x1
  __int64 v9; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&index);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v8, v9);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v8);
  return ServantLeaderInfo__getServantEventUpVal((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, setupInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantLeaderInfo_o *__fastcall FollowerInfo__getServantLeaderInfo(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *result; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t userId; // w8

  if ( (index & 0x80000000) != 0 )
    return 0LL;
  result = (ServantLeaderInfo_o *)FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !result )
    return result;
  userId = result->fields.userId;
  if ( userId <= index )
    return 0LL;
  if ( userId <= (unsigned int)index )
    sub_1BC326C(result, v6, v7);
  return (ServantLeaderInfo_o *)*((_QWORD *)&result->fields.classId + (unsigned int)index);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall FollowerInfo__getSkillIdList(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1
  __int64 v7; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v6, v7);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v6);
  return ServantLeaderInfo__getSkillIdList((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerInfo__getSkillInfo(
        FollowerInfo_o *this,
        SkillInfo_array **skillInfoList,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v8; // x1
  __int64 v9; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&index);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v8, v9);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v8);
  ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, skillInfoList, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall FollowerInfo__getSkillLevelList(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1
  __int64 v7; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v6, v7);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v6);
  return ServantLeaderInfo__getSkillLevelList((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getSvtId(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t max_length; // w8
  ServantLeaderInfo_o *v11; // x8
  __int64 v12; // x19
  __int64 v13; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B01BC7 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&index);
    byte_4B01BC7 = 1;
  }
  if ( (index & 0x80000000) != 0 )
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
    sub_1BC326C(ServantLeaderInfoByReturnType, v8, v9);
  v11 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v11 )
    return 0;
  v13 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v13;
  *(_QWORD *)&v15.fields.fakeValue = v12;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__getTreasureDeviceInfo(
        FollowerInfo_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v8; // x1
  __int64 v9; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&index);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v8, v9);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v8);
  return ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, tdInfo, 0LL);
}


bool __fastcall FollowerInfo__getTreasureDeviceInfo_40769184(
        FollowerInfo_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v10; // x1
  __int64 v11; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    (const MethodInfo *)tdMaxLv);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v10, v11);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v10);
  return ServantLeaderInfo__getTreasureDeviceInfo_42459960(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           tdLv,
           tdMaxLv,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getTreasureDeviceLevelIcon(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1
  __int64 v7; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v6, v7);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v6);
  return ServantLeaderInfo__getTreasureDeviceLevelIcon((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__getUniqueSvtRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v8; // x1
  __int64 v9; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&index);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v8, v9);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v8);
  return ServantLeaderInfo__getUniqueSvtRestriction(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           questRestrictionInfo,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__getUniqueSvtRestriction_40768408(
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
  __int64 v13; // x2

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&index);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( ServantLeaderInfoByReturnType->max_length <= index )
    sub_1BC326C(ServantLeaderInfoByReturnType, v12, v13);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_1BC3264(ServantLeaderInfoByReturnType, v12);
  return ServantLeaderInfo__getUniqueSvtRestriction_42458784(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           questRestrictionInfo,
           partyItem,
           num,
           0LL);
}


int64_t __fastcall FollowerInfo__getUpdatedAt(FollowerInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  __int64 v4; // x9
  ServantLeaderInfo_o *v5; // x8

  userSvtLeaderHash = this->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    return 0LL;
  v4 = *(_QWORD *)&userSvtLeaderHash->max_length;
  if ( !v4 )
    return 0LL;
  if ( !(_DWORD)v4 )
    sub_1BC326C(this, method, v2);
  v5 = userSvtLeaderHash->m_Items[0];
  if ( v5 )
    return v5->fields.updatedAt;
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall FollowerInfo__getUserSvtId(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  int64_t result; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t v8; // w8
  __int64 v9; // x8

  if ( (index & 0x80000000) != 0 )
    return 0LL;
  result = (int64_t)FollowerInfo__GetServantLeaderInfoByReturnType(
                      this,
                      returnSupportServantType,
                      *(const MethodInfo **)&returnSupportServantType);
  if ( !result )
    return result;
  v8 = *(_DWORD *)(result + 24);
  if ( v8 <= index )
    return 0LL;
  if ( v8 <= (unsigned int)index )
    sub_1BC326C(result, v6, v7);
  v9 = *(_QWORD *)(result + 8LL * (unsigned int)index + 32);
  if ( !v9 )
    return 0LL;
  else
    return *(_QWORD *)(v9 + 40);
}


int32_t __fastcall FollowerInfo__get_FollowerType(FollowerInfo_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


bool __fastcall FollowerInfo__get_IsNpc(FollowerInfo_o *this, const MethodInfo *method)
{
  return Follower__IsNpc(this->fields.type, 0LL);
}


void __fastcall FollowerInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B01BD1 & 1) == 0 )
  {
    sub_1BC3008(&FollowerInfo___c_TypeInfo, v1);
    byte_4B01BD1 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(FollowerInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FollowerInfo___c_TypeInfo->static_fields->__9 = (struct FollowerInfo___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)FollowerInfo___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall FollowerInfo___c___ctor(FollowerInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall FollowerInfo___c___getEquipAtk_b__58_0(
        FollowerInfo___c_o *this,
        EquipTargetInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.atk;
}


int32_t __fastcall FollowerInfo___c___getEquipHp_b__57_0(
        FollowerInfo___c_o *this,
        EquipTargetInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.hp;
}