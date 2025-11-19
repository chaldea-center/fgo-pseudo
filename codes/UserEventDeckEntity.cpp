void UserEventDeckEntity___ctor(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB70AC & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB70AC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
}


void UserEventDeckEntity___ctor_43273564(
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

  if ( (byte_4CB70AD & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    sub_1C6BA08(&DeckServant_TypeInfo);
    byte_4CB70AD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
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
    v15 = (DeckServant_o *)sub_1C6BC54(DeckServant_TypeInfo);
    DeckServant___ctor_41931832(v15, DeckMemberMax, userEquipId, 0);
  }
  else
  {
    v15 = (DeckServant_o *)sub_1C6BC54(DeckServant_TypeInfo);
    DeckServant___ctor_41932488(v15, waveNum, memberNum, userEquipId, 0);
  }
  this->fields.deckInfo = v15;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.deckInfo, (int32_t)v15, v16, v17);
}


System_String_o *UserEventDeckEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  if ( (byte_4CB70AE & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4CB70AE = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           deckNo,
           (const MethodInfo_3139B3C *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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

  if ( (byte_4CB70AF & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&long___TypeInfo);
    byte_4CB70AF = 1;
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
  return (System_Int64_array *)sub_1C6BAB0(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
}


System_Int64_array *UserEventDeckEntity__GetEquipList_43274140(
        UserEventDeckEntity_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v9; // x0

  if ( (byte_4CB70B0 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&long___TypeInfo);
    byte_4CB70B0 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_41934604(deckInfo, userSvtId, isInterruption, 0);
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1C6BAB0(long___TypeInfo, (unsigned int)v9->static_fields->SvtEquipMax);
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
  if ( (byte_4CB70B4 & 1) == 0 )
  {
    this = (UserEventDeckEntity_o *)sub_1C6BA08(&BalanceConfig_TypeInfo);
    byte_4CB70B4 = 1;
  }
  deckInfo = v2->fields.deckInfo;
  if ( !deckInfo )
LABEL_16:
    sub_1C6BC60(this, method);
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
      sub_1C6BC68(this);
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
  __int64 v5; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v9; // w21
  DeckServantData_o *v10; // x24
  int id; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4CB70B5 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CB70B5 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1C6BC68(v4);
      v10 = svts->m_Items[v9];
      if ( !v10 )
        break;
      id = v10->fields.id;
      if ( id >= 1 )
      {
        v4 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v4 = BalanceConfig_TypeInfo;
        }
        if ( id <= v4->static_fields->DeckMemberMax && v10->fields.isFollowerSvt )
        {
          if ( !v3 )
            break;
          v5 = (unsigned int)v10->fields.id;
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
              v5,
              *(const MethodInfo_37E3950 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
    sub_1C6BC60(v4, v5);
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

  if ( (byte_4CB70B1 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&long___TypeInfo);
    byte_4CB70B1 = 1;
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
  return (System_Int64_array *)sub_1C6BAB0(long___TypeInfo, (unsigned int)v7->static_fields->GrandSvtEquipMax);
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
  unsigned int v9; // w21
  DeckServantData_o *v10; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4CB70B3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    byte_4CB70B3 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
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
        sub_1C6BC68(v4);
      v10 = svts->m_Items[v9];
      if ( !v10 )
        break;
      if ( !v3 )
        break;
      npcFollowerSvtId = v10->fields.npcFollowerSvtId;
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
          *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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
    sub_1C6BC60(v4, npcFollowerSvtId);
  }
LABEL_15:
  if ( !v3 )
    goto LABEL_17;
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
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
  __int64 v11; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x26
  int max_length; // w8
  UserServantEntity_array *v15; // x25
  int i; // w23
  DeckServantData_o *v17; // x27
  int id; // w21
  int v19; // w19
  int64_t *p_userSvtId; // x21
  struct DeckServant_o *v21; // x8
  struct DeckWaveServantData_array *waveSvts; // x28
  int v23; // w8
  unsigned int v24; // w29
  DeckWaveServantData_o *v25; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x10
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppClass **v29; // x0
  CGThumbnailListItem_o *v30; // x0
  int32_t v31; // w1
  Il2CppObject *v32; // x27
  Il2CppClass **v33; // x0
  UserServantCollectionEntity_o *v34; // x28
  __int64 v35; // x27
  int64_t v36; // x28
  __int128 v37; // q0
  __int64 v39; // x0
  UserServantCollectionMaster_o *v40; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+50h] [xbp-A0h]
  UserServantCollectionEntity_o *v45; // [xsp+78h] [xbp-78h] BYREF
  Il2CppObject *v46; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4CB70B2 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&UserServantEntity___TypeInfo);
    sub_1C6BA08(&UserServantEntity_TypeInfo);
    byte_4CB70B2 = 1;
  }
  v46 = 0;
  entity = 0;
  v45 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  v8 = BalanceConfig_TypeInfo;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v7;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  IsWithdrawal = sub_1C6BAB0(UserServantEntity___TypeInfo, (unsigned int)v8->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo || (svts = deckInfo->fields.svts, v40 = (UserServantCollectionMaster_o *)v6, !svts) )
LABEL_70:
    sub_1C6BC60(IsWithdrawal, v11);
  max_length = svts->max_length;
  v15 = (UserServantEntity_array *)IsWithdrawal;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_72:
        sub_1C6BC68(IsWithdrawal);
      v17 = svts->m_Items[i];
      if ( !v17 )
        goto LABEL_70;
      id = v17->fields.id;
      v19 = id - 1;
      if ( id < 1 )
        goto LABEL_52;
      if ( wave )
      {
        p_userSvtId = &v17->fields.userSvtId;
        if ( v17->fields.userSvtId < 1 )
          goto LABEL_52;
        if ( wave >= 1 )
        {
          v21 = this->fields.deckInfo;
          if ( !v21 )
            goto LABEL_70;
          waveSvts = v21->fields.waveSvts;
          if ( !waveSvts )
            goto LABEL_70;
          v23 = waveSvts->max_length;
          if ( v23 < 1 )
            goto LABEL_52;
          v24 = 0;
          while ( 1 )
          {
            if ( v24 >= v23 )
              goto LABEL_72;
            v25 = waveSvts->m_Items[v24];
            if ( !v25 )
              goto LABEL_70;
            if ( v25->fields.wave == wave )
            {
              IsWithdrawal = System_Linq_Enumerable__Contains_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v25->fields.uniqueIds,
                               v17->fields.id,
                               (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( (IsWithdrawal & 1) != 0 )
                break;
            }
            v23 = waveSvts->max_length;
            if ( (int)++v24 >= v23 )
              goto LABEL_52;
          }
          IsWithdrawal = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            IsWithdrawal = (__int64)BalanceConfig_TypeInfo;
          }
          v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
          v19 %= *(_DWORD *)(*(_QWORD *)(IsWithdrawal + 184) + 176LL);
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
        p_userSvtId = &v17->fields.userSvtId;
        if ( v17->fields.userSvtId < 1 )
          goto LABEL_52;
        v19 = v17->fields.id - 1;
      }
      v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !Master_object )
        goto LABEL_70;
LABEL_33:
      IsWithdrawal = DataMasterBase_object__object__long___TryGetEntity(
                       v26,
                       &entity,
                       *p_userSvtId,
                       (const MethodInfo_33FB684 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
          if ( !v15 )
            goto LABEL_70;
          goto LABEL_46;
        }
        if ( !v15 )
          goto LABEL_70;
        if ( (unsigned int)v19 >= LODWORD(v15->max_length) )
          goto LABEL_72;
        v29 = &v15->obj.klass + v19;
        v29[4] = 0;
        v30 = (CGThumbnailListItem_o *)(v29 + 4);
        v31 = 0;
        goto LABEL_51;
      }
      if ( isInterruption )
      {
        IsWithdrawal = (__int64)v9;
        if ( !v9 )
          goto LABEL_70;
        IsWithdrawal = DataMasterBase_object__object__long___TryGetEntity(
                         v9,
                         &v46,
                         *p_userSvtId,
                         (const MethodInfo_33FB684 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
        if ( (IsWithdrawal & 1) != 0 )
        {
          v32 = v46;
          entity = v46;
          if ( !v15 )
            goto LABEL_70;
          goto LABEL_47;
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CB002A )
        {
          sub_1C6BA08(&NetworkManager_TypeInfo);
          byte_4CB002A = 1;
        }
        IsWithdrawal = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsWithdrawal = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v40 )
          goto LABEL_70;
        IsWithdrawal = UserServantCollectionMaster__TryGetEntity(
                         v40,
                         &v45,
                         *(_QWORD *)(*(_QWORD *)(IsWithdrawal + 184) + 64LL),
                         v17->fields.svtId,
                         0);
        if ( (IsWithdrawal & 1) != 0 )
        {
          v34 = v45;
          v35 = sub_1C6BC54(UserServantEntity_TypeInfo);
          UserServantEntity___ctor_43401192((UserServantEntity_o *)v35, v34, 1, 0);
          entity = (Il2CppObject *)v35;
          v36 = *p_userSvtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          IsWithdrawal = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v43, v36, 0);
          v44 = v43;
          if ( !v35 )
            goto LABEL_70;
          v37 = *(_OWORD *)&v44.fields.fakeValue;
          *(_OWORD *)(v35 + 16) = *(_OWORD *)&v44.fields.currentCryptoKey;
          *(_OWORD *)(v35 + 32) = v37;
          if ( !v15 )
            goto LABEL_70;
LABEL_46:
          v32 = entity;
LABEL_47:
          if ( v32 )
          {
            IsWithdrawal = sub_1C6BB44(v32, v15->obj.klass->_1.element_class);
            if ( !IsWithdrawal )
            {
              v39 = sub_1C6BC84(0);
              sub_1C6BB30(v39, 0);
            }
          }
          if ( (unsigned int)v19 >= LODWORD(v15->max_length) )
            goto LABEL_72;
          v33 = &v15->obj.klass + v19;
          v33[4] = (Il2CppClass *)v32;
          v30 = (CGThumbnailListItem_o *)(v33 + 4);
          v31 = (int)v32;
LABEL_51:
          sub_1C6B9AC(v30, v31, v27, v28);
        }
      }
LABEL_52:
      max_length = svts->max_length;
    }
  }
  return v15;
}


bool UserEventDeckEntity__IsEquip(UserEventDeckEntity_o *this, int64_t userSvtId, const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0

  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    LOBYTE(deckInfo) = DeckServant__IsEquip(deckInfo, userSvtId, 0);
  return (char)deckInfo;
}