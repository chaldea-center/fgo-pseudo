void UserEventDeckEntity___ctor(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3878E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C3878E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


void UserEventDeckEntity___ctor_42929520(
        UserEventDeckEntity_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        int64_t userEquipId,
        int32_t waveNum,
        int32_t memberNum,
        const MethodInfo *method)
{
  DeckServant_o *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  BalanceConfig_c *v18; // x0
  int32_t DeckMemberMax; // w21

  if ( (byte_4C3878F & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    sub_1C32C20(&DeckServant_TypeInfo);
    byte_4C3878F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.deckNo = deckNo;
  if ( waveNum < 1 || memberNum < 1 )
  {
    v18 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v18->static_fields->DeckMemberMax;
    v15 = (DeckServant_o *)sub_1C32E6C(DeckServant_TypeInfo);
    DeckServant___ctor_41597856(v15, DeckMemberMax, userEquipId, 0);
  }
  else
  {
    v15 = (DeckServant_o *)sub_1C32E6C(DeckServant_TypeInfo);
    DeckServant___ctor_41598512(v15, waveNum, memberNum, userEquipId, 0);
  }
  this->fields.deckInfo = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.deckInfo, (int32_t)v15, v16, v17);
}


System_String_o *UserEventDeckEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  if ( (byte_4C38790 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4C38790 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           deckNo,
           (const MethodInfo_30DBBC4 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserEventDeckEntity__CreatePrimaryKey(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventDeckEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.deckNo, v2);
}


System_Int64_array *UserEventDeckEntity__GetEquipList(
        UserEventDeckEntity_o *this,
        int32_t menber,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v7; // x0

  if ( (byte_4C38791 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&long___TypeInfo);
    byte_4C38791 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, -1, 0);
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1C32CC8(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
}


System_Int64_array *UserEventDeckEntity__GetEquipList_42930096(
        UserEventDeckEntity_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v9; // x0

  if ( (byte_4C38792 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&long___TypeInfo);
    byte_4C38792 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_41600628(deckInfo, userSvtId, isInterruption, 0);
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1C32CC8(long___TypeInfo, (unsigned int)v9->static_fields->SvtEquipMax);
}


int32_t UserEventDeckEntity__GetFollowerIndex(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  UserEventDeckEntity_o *v2; // x19
  struct DeckServant_o *deckInfo; // x8
  __int64 v4; // x20
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v7; // x22
  int id; // w23

  v2 = this;
  if ( (byte_4C38796 & 1) == 0 )
  {
    this = (UserEventDeckEntity_o *)sub_1C32C20(&BalanceConfig_TypeInfo);
    byte_4C38796 = 1;
  }
  deckInfo = v2->fields.deckInfo;
  if ( !deckInfo )
LABEL_16:
    sub_1C32E7C(this);
  v4 = 0;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_16;
    max_length = svts->max_length;
    if ( (int)v4 >= max_length )
      return 0;
    if ( (unsigned int)v4 >= max_length )
      sub_1C32E84(this);
    v7 = svts->m_Items[v4];
    if ( !v7 )
      goto LABEL_16;
    id = v7->fields.id;
    if ( id >= 1 )
    {
      this = (UserEventDeckEntity_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (UserEventDeckEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( id <= *(_DWORD *)(*(_QWORD *)&this[4].fields.eventId + 172LL)
        && v7->fields.isFollowerSvt
        && !v7->fields.npcFollowerSvtId )
      {
        return v7->fields.id;
      }
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
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v8; // w21
  DeckServantData_o *v9; // x24
  int id; // w25
  int32_t v11; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4C38797 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C38797 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_21;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_21;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C32E84(v4);
      v9 = svts->m_Items[v8];
      if ( !v9 )
        break;
      id = v9->fields.id;
      if ( id >= 1 )
      {
        v4 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v4 = BalanceConfig_TypeInfo;
        }
        if ( id <= v4->static_fields->DeckMemberMax && v9->fields.isFollowerSvt )
        {
          if ( !v3 )
            break;
          v11 = v9->fields.id;
          items = v3->fields._items;
          v13 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              v11,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = v11;
          }
        }
      }
      max_length = svts->max_length;
      if ( (int)++v8 >= max_length )
        return v3;
    }
LABEL_21:
    sub_1C32E7C(v4);
  }
  return v3;
}


System_Int64_array *UserEventDeckEntity__GetGrandEquipList(
        UserEventDeckEntity_o *this,
        int32_t memberIdx,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v7; // x0

  if ( (byte_4C38793 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&long___TypeInfo);
    byte_4C38793 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetGrandEquipList(deckInfo, memberIdx, 0);
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1C32CC8(long___TypeInfo, (unsigned int)v7->static_fields->GrandSvtEquipMax);
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
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v8; // w21
  DeckServantData_o *v9; // x8
  int64_t npcFollowerSvtId; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4C38795 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C38795 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_17;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_17;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C32E84(v4);
      v9 = svts->m_Items[v8];
      if ( !v9 )
        break;
      if ( !v3 )
        break;
      npcFollowerSvtId = v9->fields.npcFollowerSvtId;
      items = v3->fields._items;
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
          *(const MethodInfo_37807F0 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = npcFollowerSvtId;
      }
      max_length = svts->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C32E7C(v4);
  }
LABEL_15:
  if ( !v3 )
    goto LABEL_17;
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
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


UserServantEntity_array *UserEventDeckEntity__GetUserServantList(
        UserEventDeckEntity_o *this,
        int32_t wave,
        bool isInterruption,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  Il2CppObject *v6; // x21
  Il2CppObject *v7; // x0
  BalanceConfig_c *v8; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x24
  __int64 IsWithdrawal; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x26
  int max_length; // w8
  UserServantEntity_array *v14; // x25
  int i; // w23
  DeckServantData_o *v16; // x27
  int id; // w21
  int v18; // w19
  int64_t *p_userSvtId; // x21
  struct DeckServant_o *v20; // x8
  struct DeckWaveServantData_array *waveSvts; // x28
  int v22; // w8
  unsigned int v23; // w29
  DeckWaveServantData_o *v24; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x10
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppClass **v28; // x0
  CGThumbnailListItem_o *v29; // x0
  int32_t v30; // w1
  Il2CppObject *v31; // x27
  Il2CppClass **v32; // x0
  UserServantCollectionEntity_o *v33; // x28
  __int64 v34; // x27
  int64_t v35; // x28
  __int128 v36; // q0
  __int64 v38; // x0
  UserServantCollectionMaster_o *v39; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+50h] [xbp-A0h]
  UserServantCollectionEntity_o *v44; // [xsp+78h] [xbp-78h] BYREF
  Il2CppObject *v45; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4C38794 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&UserServantEntity___TypeInfo);
    sub_1C32C20(&UserServantEntity_TypeInfo);
    byte_4C38794 = 1;
  }
  v45 = 0;
  entity = 0;
  v44 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  v8 = BalanceConfig_TypeInfo;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v7;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  IsWithdrawal = sub_1C32CC8(UserServantEntity___TypeInfo, (unsigned int)v8->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo || (svts = deckInfo->fields.svts, v39 = (UserServantCollectionMaster_o *)v6, !svts) )
LABEL_70:
    sub_1C32E7C(IsWithdrawal);
  max_length = svts->max_length;
  v14 = (UserServantEntity_array *)IsWithdrawal;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_72:
        sub_1C32E84(IsWithdrawal);
      v16 = svts->m_Items[i];
      if ( !v16 )
        goto LABEL_70;
      id = v16->fields.id;
      v18 = id - 1;
      if ( id < 1 )
        goto LABEL_52;
      if ( wave )
      {
        p_userSvtId = &v16->fields.userSvtId;
        if ( v16->fields.userSvtId < 1 )
          goto LABEL_52;
        if ( wave >= 1 )
        {
          v20 = this->fields.deckInfo;
          if ( !v20 )
            goto LABEL_70;
          waveSvts = v20->fields.waveSvts;
          if ( !waveSvts )
            goto LABEL_70;
          v22 = waveSvts->max_length;
          if ( v22 < 1 )
            goto LABEL_52;
          v23 = 0;
          while ( 1 )
          {
            if ( v23 >= v22 )
              goto LABEL_72;
            v24 = waveSvts->m_Items[v23];
            if ( !v24 )
              goto LABEL_70;
            if ( v24->fields.wave == wave )
            {
              IsWithdrawal = System_Linq_Enumerable__Contains_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v24->fields.uniqueIds,
                               v16->fields.id,
                               (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( (IsWithdrawal & 1) != 0 )
                break;
            }
            v22 = waveSvts->max_length;
            if ( (int)++v23 >= v22 )
              goto LABEL_52;
          }
          IsWithdrawal = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            IsWithdrawal = (__int64)BalanceConfig_TypeInfo;
          }
          v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
          v18 %= *(_DWORD *)(*(_QWORD *)(IsWithdrawal + 184) + 176LL);
          if ( !Master_object )
            goto LABEL_70;
          goto LABEL_33;
        }
      }
      else
      {
        IsWithdrawal = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          IsWithdrawal = (__int64)BalanceConfig_TypeInfo;
        }
        if ( id > *(_DWORD *)(*(_QWORD *)(IsWithdrawal + 184) + 172LL) )
          goto LABEL_52;
        p_userSvtId = &v16->fields.userSvtId;
        if ( v16->fields.userSvtId < 1 )
          goto LABEL_52;
        v18 = v16->fields.id - 1;
      }
      v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !Master_object )
        goto LABEL_70;
LABEL_33:
      IsWithdrawal = DataMasterBase_object__object__long___TryGetEntity(
                       v25,
                       &entity,
                       *p_userSvtId,
                       (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
          if ( !v14 )
            goto LABEL_70;
          goto LABEL_46;
        }
        if ( !v14 )
          goto LABEL_70;
        if ( (unsigned int)v18 >= LODWORD(v14->max_length) )
          goto LABEL_72;
        v28 = &v14->obj.klass + v18;
        v28[4] = 0;
        v29 = (CGThumbnailListItem_o *)(v28 + 4);
        v30 = 0;
        goto LABEL_51;
      }
      if ( isInterruption )
      {
        IsWithdrawal = (__int64)v9;
        if ( !v9 )
          goto LABEL_70;
        IsWithdrawal = DataMasterBase_object__object__long___TryGetEntity(
                         v9,
                         &v45,
                         *p_userSvtId,
                         (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
        if ( (IsWithdrawal & 1) != 0 )
        {
          v31 = v45;
          entity = v45;
          if ( !v14 )
            goto LABEL_70;
          goto LABEL_47;
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
        }
        IsWithdrawal = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsWithdrawal = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v39 )
          goto LABEL_70;
        IsWithdrawal = UserServantCollectionMaster__TryGetEntity(
                         v39,
                         &v44,
                         *(_QWORD *)(*(_QWORD *)(IsWithdrawal + 184) + 64LL),
                         v16->fields.svtId,
                         0);
        if ( (IsWithdrawal & 1) != 0 )
        {
          v33 = v44;
          v34 = sub_1C32E6C(UserServantEntity_TypeInfo);
          UserServantEntity___ctor_43055668((UserServantEntity_o *)v34, v33, 1, 0);
          entity = (Il2CppObject *)v34;
          v35 = *p_userSvtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          IsWithdrawal = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v42, v35, 0);
          v43 = v42;
          if ( !v34 )
            goto LABEL_70;
          v36 = *(_OWORD *)&v43.fields.fakeValue;
          *(_OWORD *)(v34 + 16) = *(_OWORD *)&v43.fields.currentCryptoKey;
          *(_OWORD *)(v34 + 32) = v36;
          if ( !v14 )
            goto LABEL_70;
LABEL_46:
          v31 = entity;
LABEL_47:
          if ( v31 )
          {
            IsWithdrawal = sub_1C32D5C(v31, v14->obj.klass->_1.element_class);
            if ( !IsWithdrawal )
            {
              v38 = sub_1C32EA0(0);
              sub_1C32D48(v38, 0);
            }
          }
          if ( (unsigned int)v18 >= LODWORD(v14->max_length) )
            goto LABEL_72;
          v32 = &v14->obj.klass + v18;
          v32[4] = (Il2CppClass *)v31;
          v29 = (CGThumbnailListItem_o *)(v32 + 4);
          v30 = (int)v31;
LABEL_51:
          sub_1C32BC4(v29, v30, v26, v27);
        }
      }
LABEL_52:
      max_length = svts->max_length;
    }
  }
  return v14;
}


bool UserEventDeckEntity__IsEquip(UserEventDeckEntity_o *this, int64_t userSvtId, const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0

  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    LOBYTE(deckInfo) = DeckServant__IsEquip(deckInfo, userSvtId, 0);
  return (char)deckInfo;
}