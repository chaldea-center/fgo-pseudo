void UserEventDeckEntity___ctor(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2808B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C2808B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


void UserEventDeckEntity___ctor_42796800(
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

  if ( (byte_4C2808C & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    sub_1C2D490(&DeckServant_TypeInfo);
    byte_4C2808C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
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
    v15 = (DeckServant_o *)sub_1C2D6DC(DeckServant_TypeInfo);
    DeckServant___ctor_41475048(v15, DeckMemberMax, userEquipId, 0);
  }
  else
  {
    v15 = (DeckServant_o *)sub_1C2D6DC(DeckServant_TypeInfo);
    DeckServant___ctor_41475704(v15, waveNum, memberNum, userEquipId, 0);
  }
  this->fields.deckInfo = v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.deckInfo, (int32_t)v15, v16, v17);
}


System_String_o *UserEventDeckEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  if ( (byte_4C2808D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4C2808D = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           deckNo,
           (const MethodInfo_30CD124 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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

  if ( (byte_4C2808E & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    byte_4C2808E = 1;
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
  return (System_Int64_array *)sub_1C2D538(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
}


System_Int64_array *UserEventDeckEntity__GetEquipList_42797376(
        UserEventDeckEntity_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v9; // x0

  if ( (byte_4C2808F & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    byte_4C2808F = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_41477820(deckInfo, userSvtId, isInterruption, 0);
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1C2D538(long___TypeInfo, (unsigned int)v9->static_fields->SvtEquipMax);
}


int32_t UserEventDeckEntity__GetFollowerIndex(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UserEventDeckEntity_o *v3; // x19
  struct DeckServant_o *deckInfo; // x8
  __int64 v5; // x20
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v8; // x22
  int id; // w23

  v3 = this;
  if ( (byte_4C28093 & 1) == 0 )
  {
    this = (UserEventDeckEntity_o *)sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C28093 = 1;
  }
  deckInfo = v3->fields.deckInfo;
  if ( !deckInfo )
LABEL_16:
    sub_1C2D6EC(this, method);
  v5 = 0;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_16;
    max_length = svts->max_length;
    if ( (int)v5 >= max_length )
      return 0;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2D6F4(this, method, v2);
    v8 = svts->m_Items[v5];
    if ( !v8 )
      goto LABEL_16;
    id = v8->fields.id;
    if ( id >= 1 )
    {
      this = (UserEventDeckEntity_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (UserEventDeckEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( id <= *(_DWORD *)(*(_QWORD *)&this[4].fields.eventId + 172LL)
        && v8->fields.isFollowerSvt
        && !v8->fields.npcFollowerSvtId )
      {
        return v8->fields.id;
      }
    }
    deckInfo = v3->fields.deckInfo;
    ++v5;
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
  __int64 v6; // x2
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v10; // w21
  DeckServantData_o *v11; // x24
  int id; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_4C28094 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C28094 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_21;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_21;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C2D6F4(v4, v5, v6);
      v11 = svts->m_Items[v10];
      if ( !v11 )
        break;
      id = v11->fields.id;
      if ( id >= 1 )
      {
        v4 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v4 = BalanceConfig_TypeInfo;
        }
        if ( id <= v4->static_fields->DeckMemberMax && v11->fields.isFollowerSvt )
        {
          if ( !v3 )
            break;
          v5 = (unsigned int)v11->fields.id;
          items = v3->fields._items;
          v14 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              v5,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = v5;
          }
        }
      }
      max_length = svts->max_length;
      if ( (int)++v10 >= max_length )
        return v3;
    }
LABEL_21:
    sub_1C2D6EC(v4, v5);
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

  if ( (byte_4C28090 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    byte_4C28090 = 1;
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
  return (System_Int64_array *)sub_1C2D538(long___TypeInfo, (unsigned int)v7->static_fields->GrandSvtEquipMax);
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
  __int64 v6; // x2
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v10; // w21
  DeckServantData_o *v11; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4C28092 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C28092 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_17;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_17;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C2D6F4(v4, npcFollowerSvtId, v6);
      v11 = svts->m_Items[v10];
      if ( !v11 )
        break;
      if ( !v3 )
        break;
      npcFollowerSvtId = v11->fields.npcFollowerSvtId;
      items = v3->fields._items;
      v13 = Method_System_Collections_Generic_List_long__Add__;
      ++v3->fields._version;
      if ( !items )
        break;
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          npcFollowerSvtId,
          *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = npcFollowerSvtId;
      }
      max_length = svts->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C2D6EC(v4, npcFollowerSvtId);
  }
LABEL_15:
  if ( !v3 )
    goto LABEL_17;
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
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
  __int64 v12; // x2
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x26
  int max_length; // w8
  UserServantEntity_array *v16; // x25
  int i; // w23
  DeckServantData_o *v18; // x27
  int id; // w21
  int v20; // w19
  int64_t *p_userSvtId; // x21
  struct DeckServant_o *v22; // x8
  struct DeckWaveServantData_array *waveSvts; // x28
  int v24; // w8
  unsigned int v25; // w29
  DeckWaveServantData_o *v26; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x10
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

  if ( (byte_4C28091 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&UserServantEntity___TypeInfo);
    sub_1C2D490(&UserServantEntity_TypeInfo);
    byte_4C28091 = 1;
  }
  v46 = 0;
  entity = 0;
  v45 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  v8 = BalanceConfig_TypeInfo;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v7;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  IsWithdrawal = sub_1C2D538(UserServantEntity___TypeInfo, (unsigned int)v8->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo || (svts = deckInfo->fields.svts, v40 = (UserServantCollectionMaster_o *)v6, !svts) )
LABEL_70:
    sub_1C2D6EC(IsWithdrawal, v11);
  max_length = svts->max_length;
  v16 = (UserServantEntity_array *)IsWithdrawal;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_72:
        sub_1C2D6F4(IsWithdrawal, v11, v12);
      v18 = svts->m_Items[i];
      if ( !v18 )
        goto LABEL_70;
      id = v18->fields.id;
      v20 = id - 1;
      if ( id < 1 )
        goto LABEL_52;
      if ( wave )
      {
        p_userSvtId = &v18->fields.userSvtId;
        if ( v18->fields.userSvtId < 1 )
          goto LABEL_52;
        if ( wave >= 1 )
        {
          v22 = this->fields.deckInfo;
          if ( !v22 )
            goto LABEL_70;
          waveSvts = v22->fields.waveSvts;
          if ( !waveSvts )
            goto LABEL_70;
          v24 = waveSvts->max_length;
          if ( v24 < 1 )
            goto LABEL_52;
          v25 = 0;
          while ( 1 )
          {
            if ( v25 >= v24 )
              goto LABEL_72;
            v26 = waveSvts->m_Items[v25];
            if ( !v26 )
              goto LABEL_70;
            if ( v26->fields.wave == wave )
            {
              IsWithdrawal = System_Linq_Enumerable__Contains_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v26->fields.uniqueIds,
                               v18->fields.id,
                               (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( (IsWithdrawal & 1) != 0 )
                break;
            }
            v24 = waveSvts->max_length;
            if ( (int)++v25 >= v24 )
              goto LABEL_52;
          }
          IsWithdrawal = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            IsWithdrawal = (__int64)BalanceConfig_TypeInfo;
          }
          v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
          v20 %= *(_DWORD *)(*(_QWORD *)(IsWithdrawal + 184) + 176LL);
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
        p_userSvtId = &v18->fields.userSvtId;
        if ( v18->fields.userSvtId < 1 )
          goto LABEL_52;
        v20 = v18->fields.id - 1;
      }
      v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !Master_object )
        goto LABEL_70;
LABEL_33:
      IsWithdrawal = DataMasterBase_object__object__long___TryGetEntity(
                       v27,
                       &entity,
                       *p_userSvtId,
                       (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
          if ( !v16 )
            goto LABEL_70;
          goto LABEL_46;
        }
        if ( !v16 )
          goto LABEL_70;
        if ( (unsigned int)v20 >= LODWORD(v16->max_length) )
          goto LABEL_72;
        v29 = &v16->obj.klass + v20;
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
                         (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
        if ( (IsWithdrawal & 1) != 0 )
        {
          v32 = v46;
          entity = v46;
          if ( !v16 )
            goto LABEL_70;
          goto LABEL_47;
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
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
                         v18->fields.svtId,
                         0);
        if ( (IsWithdrawal & 1) != 0 )
        {
          v34 = v45;
          v35 = sub_1C2D6DC(UserServantEntity_TypeInfo);
          UserServantEntity___ctor_42922472((UserServantEntity_o *)v35, v34, 1, 0);
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
          if ( !v16 )
            goto LABEL_70;
LABEL_46:
          v32 = entity;
LABEL_47:
          if ( v32 )
          {
            IsWithdrawal = sub_1C2D5CC(v32, v16->obj.klass->_1.element_class);
            if ( !IsWithdrawal )
            {
              v39 = sub_1C2D710(0);
              sub_1C2D5B8(v39, 0);
            }
          }
          if ( (unsigned int)v20 >= LODWORD(v16->max_length) )
            goto LABEL_72;
          v33 = &v16->obj.klass + v20;
          v33[4] = (Il2CppClass *)v32;
          v30 = (CGThumbnailListItem_o *)(v33 + 4);
          v31 = (int)v32;
LABEL_51:
          sub_1C2D434(v30, v31, v12, v28);
        }
      }
LABEL_52:
      max_length = svts->max_length;
    }
  }
  return v16;
}


bool UserEventDeckEntity__IsEquip(UserEventDeckEntity_o *this, int64_t userSvtId, const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0

  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    LOBYTE(deckInfo) = DeckServant__IsEquip(deckInfo, userSvtId, 0);
  return (char)deckInfo;
}