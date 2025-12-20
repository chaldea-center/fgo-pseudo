void UserEventDeckEntity___ctor(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D669 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2D669 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


void UserEventDeckEntity___ctor_43813092(
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  BalanceConfig_c *v22; // x0
  int32_t DeckMemberMax; // w21

  if ( (byte_4D2D66A & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    sub_1C94098(&DeckServant_TypeInfo);
    byte_4D2D66A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.deckNo = deckNo;
  if ( waveNum < 1 || memberNum < 1 )
  {
    v22 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v22->static_fields->DeckMemberMax;
    v15 = (DeckServant_o *)sub_1C942E4(DeckServant_TypeInfo);
    DeckServant___ctor_42460708(v15, DeckMemberMax, userEquipId, 0);
  }
  else
  {
    v15 = (DeckServant_o *)sub_1C942E4(DeckServant_TypeInfo);
    DeckServant___ctor_42461364(v15, waveNum, memberNum, userEquipId, 0);
  }
  this->fields.deckInfo = v15;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.deckInfo, (int32_t)v15, v16, v17, v18, v19, v20, v21);
}


System_String_o *UserEventDeckEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  if ( (byte_4D2D66B & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4D2D66B = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           deckNo,
           (const MethodInfo_319A908 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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

  if ( (byte_4D2D66C & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&long___TypeInfo);
    byte_4D2D66C = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, 0);
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1C94140(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
}


System_Int64_array *UserEventDeckEntity__GetEquipList_43813664(
        UserEventDeckEntity_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v9; // x0

  if ( (byte_4D2D66D & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&long___TypeInfo);
    byte_4D2D66D = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_42463504(deckInfo, userSvtId, isInterruption, 0);
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1C94140(long___TypeInfo, (unsigned int)v9->static_fields->SvtEquipMax);
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
  if ( (byte_4D2D671 & 1) == 0 )
  {
    this = (UserEventDeckEntity_o *)sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D2D671 = 1;
  }
  deckInfo = v2->fields.deckInfo;
  if ( !deckInfo )
LABEL_16:
    sub_1C942F0(this, method);
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
      sub_1C942F8(this);
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

  if ( (byte_4D2D672 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2D672 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1C942F8(v4);
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
              *(const MethodInfo_384DE10 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
    sub_1C942F0(v4, v5);
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

  if ( (byte_4D2D66E & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&long___TypeInfo);
    byte_4D2D66E = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, memberIdx, 0);
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1C94140(long___TypeInfo, (unsigned int)v7->static_fields->GrandSvtEquipMax);
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

  if ( (byte_4D2D670 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C94098(&System_Collections_Generic_List_long__TypeInfo);
    byte_4D2D670 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
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
        sub_1C942F8(v4);
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
          *(const MethodInfo_3852E68 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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
    sub_1C942F0(v4, npcFollowerSvtId);
  }
LABEL_15:
  if ( !v3 )
    goto LABEL_17;
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
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
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  Il2CppClass **v33; // x0
  GrandQuestFolderBoardItem_o *v34; // x0
  int32_t v35; // w1
  Il2CppObject *v36; // x27
  Il2CppClass **v37; // x0
  UserServantCollectionEntity_o *v38; // x28
  __int64 v39; // x27
  int64_t v40; // x28
  __int128 v41; // q0
  __int64 v43; // x0
  UserServantCollectionMaster_o *v44; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+50h] [xbp-A0h]
  UserServantCollectionEntity_o *v49; // [xsp+78h] [xbp-78h] BYREF
  Il2CppObject *v50; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4D2D66F & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&UserServantEntity___TypeInfo);
    sub_1C94098(&UserServantEntity_TypeInfo);
    byte_4D2D66F = 1;
  }
  v50 = 0;
  entity = 0;
  v49 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  v8 = BalanceConfig_TypeInfo;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v7;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  IsWithdrawal = sub_1C94140(UserServantEntity___TypeInfo, (unsigned int)v8->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo || (svts = deckInfo->fields.svts, v44 = (UserServantCollectionMaster_o *)v6, !svts) )
LABEL_70:
    sub_1C942F0(IsWithdrawal, v11);
  max_length = svts->max_length;
  v15 = (UserServantEntity_array *)IsWithdrawal;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_72:
        sub_1C942F8(IsWithdrawal);
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
                               (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
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
                       (const MethodInfo_345DA68 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
        v33 = &v15->obj.klass + v19;
        v33[4] = 0;
        v34 = (GrandQuestFolderBoardItem_o *)(v33 + 4);
        v35 = 0;
        goto LABEL_51;
      }
      if ( isInterruption )
      {
        IsWithdrawal = (__int64)v9;
        if ( !v9 )
          goto LABEL_70;
        IsWithdrawal = DataMasterBase_object__object__long___TryGetEntity(
                         v9,
                         &v50,
                         *p_userSvtId,
                         (const MethodInfo_345DA68 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
        if ( (IsWithdrawal & 1) != 0 )
        {
          v36 = v50;
          entity = v50;
          if ( !v15 )
            goto LABEL_70;
          goto LABEL_47;
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2633A )
        {
          sub_1C94098(&NetworkManager_TypeInfo);
          byte_4D2633A = 1;
        }
        IsWithdrawal = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsWithdrawal = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v44 )
          goto LABEL_70;
        IsWithdrawal = UserServantCollectionMaster__TryGetEntity(
                         v44,
                         &v49,
                         *(_QWORD *)(*(_QWORD *)(IsWithdrawal + 184) + 64LL),
                         v17->fields.svtId,
                         0);
        if ( (IsWithdrawal & 1) != 0 )
        {
          v38 = v49;
          v39 = sub_1C942E4(UserServantEntity_TypeInfo);
          UserServantEntity___ctor_43941312((UserServantEntity_o *)v39, v38, 1, 0);
          entity = (Il2CppObject *)v39;
          v40 = *p_userSvtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          IsWithdrawal = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v47, v40, 0);
          v48 = v47;
          if ( !v39 )
            goto LABEL_70;
          v41 = *(_OWORD *)&v48.fields.fakeValue;
          *(_OWORD *)(v39 + 16) = *(_OWORD *)&v48.fields.currentCryptoKey;
          *(_OWORD *)(v39 + 32) = v41;
          if ( !v15 )
            goto LABEL_70;
LABEL_46:
          v36 = entity;
LABEL_47:
          if ( v36 )
          {
            IsWithdrawal = sub_1C941D4(v36, v15->obj.klass->_1.element_class);
            if ( !IsWithdrawal )
            {
              v43 = sub_1C94314(0);
              sub_1C941C0(v43, 0);
            }
          }
          if ( (unsigned int)v19 >= LODWORD(v15->max_length) )
            goto LABEL_72;
          v37 = &v15->obj.klass + v19;
          v37[4] = (Il2CppClass *)v36;
          v34 = (GrandQuestFolderBoardItem_o *)(v37 + 4);
          v35 = (int)v36;
LABEL_51:
          sub_1C9403C(v34, v35, v27, v28, v29, v30, v31, v32);
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


int32_t UserEventDeckEntity__IsEquipTarget2SkillChange(
        UserEventDeckEntity_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct DeckServant_o *deckInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *svts; // x19
  System_Func_object__bool__o *v10; // x20
  Il2CppObject *v11; // x0

  if ( (byte_4D2D673 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_DeckServantData___);
    sub_1C94098(&System_Func_DeckServantData__bool__TypeInfo);
    sub_1C94098(&Method_UserEventDeckEntity___c__DisplayClass18_0__IsEquipTarget2SkillChange_b__0__);
    sub_1C94098(&UserEventDeckEntity___c__DisplayClass18_0_TypeInfo);
    byte_4D2D673 = 1;
  }
  v5 = sub_1C942E4(UserEventDeckEntity___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_DWORD *)(v5 + 16) = pos;
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
  {
    *(_DWORD *)(v5 + 16) = pos + 1;
    svts = (System_Collections_Generic_IEnumerable_TSource__o *)deckInfo->fields.svts;
    v10 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_DeckServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v10,
      (Il2CppObject *)v5,
      Method_UserEventDeckEntity___c__DisplayClass18_0__IsEquipTarget2SkillChange_b__0__,
      0);
    v11 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
            svts,
            (System_Func_TSource__bool__o *)v10,
            (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_DeckServantData___);
    if ( v11 )
      LODWORD(v11) = v11[5].klass;
  }
  else
  {
    LODWORD(v11) = 0;
  }
  return (int)v11;
}


void UserEventDeckEntity___c__DisplayClass18_0___ctor(
        UserEventDeckEntity___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserEventDeckEntity___c__DisplayClass18_0___IsEquipTarget2SkillChange_b__0(
        UserEventDeckEntity___c__DisplayClass18_0_o *this,
        DeckServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1C942F0(this, 0);
  return svt->fields.id == this->fields.pos;
}