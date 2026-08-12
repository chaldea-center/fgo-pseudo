void UserEventDeckEntity___ctor(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597168F & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_597168F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


void UserEventDeckEntity___ctor_50047888(
        UserEventDeckEntity_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        int64_t userEquipId,
        int32_t waveNum,
        int32_t memberNum,
        const MethodInfo *method)
{
  __int64 v15; // x1
  DeckServant_o *v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct DeckServant_o **p_deckInfo; // x0
  int32_t v24; // w1
  BalanceConfig_c *v25; // x0
  int32_t DeckMemberMax; // w21
  DeckServant_o *v27; // x22

  if ( (byte_5971690 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    sub_2213A60(&DeckServant_TypeInfo);
    byte_5971690 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.deckNo = deckNo;
  if ( waveNum < 1 || memberNum < 1 )
  {
    v25 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15);
      v25 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v25->static_fields->DeckMemberMax;
    v27 = (DeckServant_o *)sub_2213CCC(DeckServant_TypeInfo);
    DeckServant___ctor_48702276(v27, DeckMemberMax, userEquipId, 0);
    this->fields.deckInfo = v27;
    p_deckInfo = &this->fields.deckInfo;
    v24 = (int)v27;
  }
  else
  {
    v16 = (DeckServant_o *)sub_2213CCC(DeckServant_TypeInfo);
    DeckServant___ctor_48702940(v16, waveNum, memberNum, userEquipId, 0);
    this->fields.deckInfo = v16;
    p_deckInfo = &this->fields.deckInfo;
    v24 = (int)v16;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_deckInfo, v24, v17, v18, v19, v20, v21, v22);
}


System_String_o *UserEventDeckEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  if ( (byte_5971691 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_5971691 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           deckNo,
           (const MethodInfo_3854A80 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserEventDeckEntity__CreatePrimaryKey(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventDeckEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.deckNo, v2);
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *UserEventDeckEntity__GetEquipList(
        UserEventDeckEntity_o *this,
        int32_t menber,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v7; // x0

  if ( (byte_5971692 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&long___TypeInfo);
    byte_5971692 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, 0);
  v7 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&menber);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_2213B20(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
}


System_Int64_array *UserEventDeckEntity__GetEquipList_50048472(
        UserEventDeckEntity_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v9; // x0

  if ( (byte_5971693 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&long___TypeInfo);
    byte_5971693 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_48705416(deckInfo, userSvtId, isInterruption, 0);
  v9 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userSvtId);
    v9 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_2213B20(long___TypeInfo, (unsigned int)v9->static_fields->SvtEquipMax);
}


int32_t UserEventDeckEntity__GetFollowerIndex(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  UserEventDeckEntity_o *v2; // x19
  struct DeckServant_o *deckInfo; // x8
  unsigned int v4; // w21
  struct DeckServantData_array *svts; // x8
  unsigned int max_length; // w9
  DeckServantData_o *v7; // x22
  int id; // w23

  v2 = this;
  if ( (byte_5971697 & 1) == 0 )
  {
    this = (UserEventDeckEntity_o *)sub_2213A60(&BalanceConfig_TypeInfo);
    byte_5971697 = 1;
  }
  deckInfo = v2->fields.deckInfo;
  if ( !deckInfo )
LABEL_16:
    sub_2213CDC(this, method);
  v4 = 0;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_16;
    max_length = svts->max_length;
    if ( (int)v4 >= (int)max_length )
      return 0;
    if ( v4 >= max_length )
      sub_2213CE4(this);
    v7 = svts->m_Items[v4];
    if ( !v7 )
      goto LABEL_16;
    id = v7->fields.id;
    if ( id >= 1 )
    {
      this = (UserEventDeckEntity_o *)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
        this = (UserEventDeckEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( id <= *(_DWORD *)(*((_QWORD *)this + 23) + 172LL) && v7->fields.isFollowerSvt && !v7->fields.npcFollowerSvtId )
        return v7->fields.id;
    }
    deckInfo = v2->fields.deckInfo;
    ++v4;
    if ( !deckInfo )
      goto LABEL_16;
  }
}


System_Collections_Generic_List_int__o *UserEventDeckEntity__GetFollowerIndexList(
        UserEventDeckEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v9; // w23
  DeckServantData_o *v10; // x24
  int id; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_5971698 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5971698 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_21;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_21;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_2213CE4(v4);
      v10 = svts->m_Items[v9];
      if ( !v10 )
        break;
      id = v10->fields.id;
      if ( id >= 1 )
      {
        v4 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
          v4 = BalanceConfig_TypeInfo;
        }
        if ( id <= v4->static_fields->DeckMemberMax && v10->fields.isFollowerSvt )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v5 = (unsigned int)v10->fields.id;
          v13 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              v5,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = v5;
          }
        }
      }
      max_length = svts->max_length;
      if ( (int)++v9 >= max_length )
        return v3;
    }
LABEL_21:
    sub_2213CDC(v4, v5);
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *UserEventDeckEntity__GetGrandEquipList(
        UserEventDeckEntity_o *this,
        int32_t memberIdx,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v7; // x0

  if ( (byte_5971694 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&long___TypeInfo);
    byte_5971694 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, memberIdx, 0);
  v7 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&memberIdx);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_2213B20(long___TypeInfo, (unsigned int)v7->static_fields->GrandSvtEquipMax);
}


int64_t UserEventDeckEntity__GetNpcFollowerServantId(
        UserEventDeckEntity_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)this->fields.deckInfo;
  if ( result )
    return DeckServant__GetNpcFollowerServantId((DeckServant_o *)result, pos, 0);
  return result;
}


System_Int64_array *UserEventDeckEntity__GetNpcServantFollowerIds(
        UserEventDeckEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x19
  __int64 v4; // x0
  int64_t npcFollowerSvtId; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v9; // w22
  DeckServantData_o *v10; // x9
  struct System_Int64_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_5971696 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    byte_5971696 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_17;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_17;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_2213CE4(v4);
      v10 = svts->m_Items[v9];
      if ( !v10 )
        break;
      if ( !v3 )
        break;
      items = v3->fields._items;
      npcFollowerSvtId = v10->fields.npcFollowerSvtId;
      v12 = Method_System_Collections_Generic_List_long__Add__;
      ++v3->fields._version;
      if ( !items )
        break;
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          npcFollowerSvtId,
          *(const MethodInfo_446C29C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = npcFollowerSvtId;
      }
      max_length = svts->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_2213CDC(v4, npcFollowerSvtId);
  }
LABEL_15:
  if ( !v3 )
    goto LABEL_17;
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
}


UserServantEntity_o *UserEventDeckEntity__GetUserServant(
        UserEventDeckEntity_o *this,
        int32_t menber,
        const MethodInfo *method)
{
  UserServantEntity_o *result; // x0

  result = (UserServantEntity_o *)this->fields.deckInfo;
  if ( result )
    return DeckServant__GetUserServant((DeckServant_o *)result, menber, 0);
  return result;
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_array *UserEventDeckEntity__GetUserServantList(
        UserEventDeckEntity_o *this,
        int32_t wave,
        bool isInterruption,
        const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *Master_object; // x22
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  BalanceConfig_c *v10; // x8
  Il2CppObject *v11; // x23
  __int64 IsWithdrawal; // x0
  __int64 v13; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x26
  int max_length; // w8
  UserServantEntity_array *v17; // x25
  int v18; // w23
  DeckServantData_o *v19; // x27
  int id; // w21
  int v21; // w19
  int64_t *p_userSvtId; // x21
  struct DeckServant_o *v23; // x8
  struct DeckWaveServantData_array *waveSvts; // x28
  int v25; // w8
  unsigned int v26; // w29
  DeckWaveServantData_o *v27; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x10
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t v35; // w1
  MissionNaviTransitionBoardItem_o *v36; // x0
  Il2CppObject *v37; // x27
  __int64 v38; // x1
  UserServantCollectionEntity_o *v39; // x28
  __int64 v40; // x27
  __int64 v41; // x1
  int64_t v42; // x28
  __int128 v43; // q1
  __int64 v45; // x0
  UserServantCollectionMaster_o *v46; // [xsp+8h] [xbp-C8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v47; // [xsp+10h] [xbp-C0h]
  __int64 v48; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+38h] [xbp-98h] BYREF
  UserServantCollectionEntity_o *v52; // [xsp+58h] [xbp-78h] BYREF
  Il2CppObject *v53; // [xsp+60h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_5971695 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&UserServantEntity___TypeInfo);
    sub_2213A60(&UserServantEntity_TypeInfo);
    byte_5971695 = 1;
  }
  entity = 0;
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v52 = 0;
  v53 = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&wave);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v8 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  v10 = BalanceConfig_TypeInfo;
  v11 = v8;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9);
    v10 = BalanceConfig_TypeInfo;
  }
  IsWithdrawal = sub_2213B20(UserServantEntity___TypeInfo, (unsigned int)v10->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo
    || (svts = deckInfo->fields.svts,
        v46 = (UserServantCollectionMaster_o *)v7,
        v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)v11,
        !svts) )
  {
LABEL_70:
    sub_2213CDC(IsWithdrawal, v13);
  }
  max_length = svts->max_length;
  v17 = (UserServantEntity_array *)IsWithdrawal;
  if ( max_length >= 1 )
  {
    v18 = 0;
    v48 = IsWithdrawal + 32;
    do
    {
      if ( v18 >= (unsigned int)max_length )
LABEL_72:
        sub_2213CE4(IsWithdrawal);
      v19 = svts->m_Items[v18];
      if ( !v19 )
        goto LABEL_70;
      id = v19->fields.id;
      v21 = id - 1;
      if ( id < 1 )
        goto LABEL_52;
      if ( wave )
      {
        p_userSvtId = &v19->fields.userSvtId;
        if ( v19->fields.userSvtId < 1 )
          goto LABEL_52;
        if ( wave >= 1 )
        {
          v23 = this->fields.deckInfo;
          if ( !v23 )
            goto LABEL_70;
          waveSvts = v23->fields.waveSvts;
          if ( !waveSvts )
            goto LABEL_70;
          v25 = waveSvts->max_length;
          if ( v25 < 1 )
            goto LABEL_52;
          v26 = 0;
          while ( 1 )
          {
            if ( v26 >= v25 )
              goto LABEL_72;
            v27 = waveSvts->m_Items[v26];
            if ( !v27 )
              goto LABEL_70;
            if ( v27->fields.wave == wave )
            {
              IsWithdrawal = System_Linq_Enumerable__Contains_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v27->fields.uniqueIds,
                               v19->fields.id,
                               (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( (IsWithdrawal & 1) != 0 )
                break;
            }
            v25 = waveSvts->max_length;
            if ( (int)++v26 >= v25 )
              goto LABEL_52;
          }
          IsWithdrawal = (__int64)BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13);
            IsWithdrawal = (__int64)BalanceConfig_TypeInfo;
          }
          v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
          v21 %= *(_DWORD *)(*(_QWORD *)(IsWithdrawal + 184) + 176LL);
          if ( !Master_object )
            goto LABEL_70;
          goto LABEL_33;
        }
      }
      else
      {
        IsWithdrawal = (__int64)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13);
          IsWithdrawal = (__int64)BalanceConfig_TypeInfo;
        }
        if ( id > *(_DWORD *)(*(_QWORD *)(IsWithdrawal + 184) + 172LL) )
          goto LABEL_52;
        p_userSvtId = &v19->fields.userSvtId;
        if ( v19->fields.userSvtId < 1 )
          goto LABEL_52;
        v21 = v19->fields.id - 1;
      }
      v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !Master_object )
        goto LABEL_70;
LABEL_33:
      IsWithdrawal = DataMasterBase_object__object__long___TryGetEntity(
                       v28,
                       &entity,
                       *p_userSvtId,
                       (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (IsWithdrawal & 1) != 0 )
      {
        if ( isInterruption )
          goto LABEL_45;
        IsWithdrawal = (__int64)entity;
        if ( !entity )
          goto LABEL_70;
        IsWithdrawal = UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0);
        if ( (IsWithdrawal & 1) == 0 )
        {
LABEL_45:
          if ( !v17 )
            goto LABEL_70;
          goto LABEL_46;
        }
        if ( !v17 )
          goto LABEL_70;
        if ( (unsigned int)v21 >= LODWORD(v17->max_length) )
          goto LABEL_72;
        v35 = 0;
        v36 = (MissionNaviTransitionBoardItem_o *)(v48 + 8LL * v21);
        v17->m_Items[v21] = 0;
        goto LABEL_51;
      }
      if ( isInterruption )
      {
        IsWithdrawal = (__int64)v47;
        if ( !v47 )
          goto LABEL_70;
        IsWithdrawal = DataMasterBase_object__object__long___TryGetEntity(
                         v47,
                         &v53,
                         *p_userSvtId,
                         (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
        if ( (IsWithdrawal & 1) != 0 )
        {
          v37 = v53;
          entity = v53;
          if ( !v17 )
            goto LABEL_70;
          goto LABEL_47;
        }
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        IsWithdrawal = (__int64)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
          IsWithdrawal = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v46 )
          goto LABEL_70;
        IsWithdrawal = UserServantCollectionMaster__TryGetEntity(
                         v46,
                         &v52,
                         *(_QWORD *)(*(_QWORD *)(IsWithdrawal + 184) + 64LL),
                         v19->fields.svtId,
                         0);
        if ( (IsWithdrawal & 1) != 0 )
        {
          v39 = v52;
          v40 = sub_2213CCC(UserServantEntity_TypeInfo);
          UserServantEntity___ctor_50174004((UserServantEntity_o *)v40, v39, 1, 0);
          v42 = *p_userSvtId;
          entity = (Il2CppObject *)v40;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v41);
          IsWithdrawal = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v51, v42, 0);
          if ( !v40 )
            goto LABEL_70;
          v43 = *(_OWORD *)&v51.fields.fakeValue;
          *(_OWORD *)(v40 + 16) = *(_OWORD *)&v51.fields.currentCryptoKey;
          *(_OWORD *)(v40 + 32) = v43;
          if ( !v17 )
            goto LABEL_70;
LABEL_46:
          v37 = entity;
LABEL_47:
          if ( v37 )
          {
            IsWithdrawal = sub_2213BB4(v37, v17->obj.klass->_1.element_class);
            if ( !IsWithdrawal )
            {
              v45 = sub_2213D00(0, v38);
              sub_2213BA0(v45, 0);
            }
          }
          if ( (unsigned int)v21 >= LODWORD(v17->max_length) )
            goto LABEL_72;
          v35 = (int)v37;
          v36 = (MissionNaviTransitionBoardItem_o *)(v48 + 8LL * v21);
          v17->m_Items[v21] = (UserServantEntity_o *)v37;
LABEL_51:
          sub_2213A04(v36, v35, v29, v30, v31, v32, v33, v34);
        }
      }
LABEL_52:
      max_length = svts->max_length;
      ++v18;
    }
    while ( v18 < max_length );
  }
  return v17;
}


int32_t UserEventDeckEntity__IsEquipTarget2SkillChange(
        UserEventDeckEntity_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct DeckServant_o *deckInfo; // x8
  int v9; // w10
  System_Collections_Generic_IEnumerable_TSource__o *svts; // x19
  System_Func_DeckServantData__bool__c *v11; // x0
  System_Func_object__bool__o *v12; // x20
  Il2CppObject *v13; // x0

  if ( (byte_5971699 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_DeckServantData___);
    sub_2213A60(&System_Func_DeckServantData__bool__TypeInfo);
    sub_2213A60(&Method_UserEventDeckEntity___c__DisplayClass17_0__IsEquipTarget2SkillChange_b__0__);
    sub_2213A60(&UserEventDeckEntity___c__DisplayClass17_0_TypeInfo);
    byte_5971699 = 1;
  }
  v5 = sub_2213CCC(UserEventDeckEntity___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  deckInfo = this->fields.deckInfo;
  *(_DWORD *)(v5 + 16) = pos;
  if ( deckInfo )
  {
    v9 = pos + 1;
    svts = (System_Collections_Generic_IEnumerable_TSource__o *)deckInfo->fields.svts;
    v11 = System_Func_DeckServantData__bool__TypeInfo;
    *(_DWORD *)(v5 + 16) = v9;
    v12 = (System_Func_object__bool__o *)sub_2213CCC(v11);
    System_Func_object__bool____ctor(
      v12,
      (Il2CppObject *)v5,
      Method_UserEventDeckEntity___c__DisplayClass17_0__IsEquipTarget2SkillChange_b__0__,
      0);
    v13 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
            svts,
            (System_Func_TSource__bool__o *)v12,
            (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_DeckServantData___);
    if ( v13 )
      LODWORD(v13) = v13[5].klass;
  }
  else
  {
    LODWORD(v13) = 0;
  }
  return (int)v13;
}


void UserEventDeckEntity___c__DisplayClass17_0___ctor(
        UserEventDeckEntity___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserEventDeckEntity___c__DisplayClass17_0___IsEquipTarget2SkillChange_b__0(
        UserEventDeckEntity___c__DisplayClass17_0_o *this,
        DeckServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_2213CDC(this, 0);
  return svt->fields.id == this->fields.pos;
}