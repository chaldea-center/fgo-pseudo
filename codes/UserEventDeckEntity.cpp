void __fastcall UserEventDeckEntity___ctor(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16E47 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16E47 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserEventDeckEntity___ctor_40803552(
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  DeckServant_o *v22; // x23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  BalanceConfig_c *v29; // x0
  int32_t DeckMemberMax; // w21

  if ( (byte_4B16E48 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userId, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, v15, v16);
    sub_1BCA7E0(&DeckServant_TypeInfo, v17, v18);
    byte_4B16E48 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.deckNo = deckNo;
  if ( waveNum < 1 || memberNum < 1 )
  {
    v29 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19);
      v29 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v29->static_fields->DeckMemberMax;
    v22 = (DeckServant_o *)sub_1BCAA2C(DeckServant_TypeInfo, v19, v20, v21);
    DeckServant___ctor_39589472(v22, DeckMemberMax, userEquipId, 0LL);
  }
  else
  {
    v22 = (DeckServant_o *)sub_1BCAA2C(DeckServant_TypeInfo, v19, v20, v21);
    DeckServant___ctor_39590128(v22, waveNum, memberNum, userEquipId, 0LL);
  }
  this->fields.deckInfo = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.deckInfo, (int64_t)v22, v23, v24, v25, v26, v27, v28);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventDeckEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  if ( (byte_4B16E49 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&eventId, *(_QWORD *)&deckNo);
    byte_4B16E49 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           deckNo,
           (const MethodInfo_2F11500 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventDeckEntity__CreatePrimaryKey(
        UserEventDeckEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventDeckEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.deckNo, v2);
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *__fastcall UserEventDeckEntity__GetEquipList(
        UserEventDeckEntity_o *this,
        int32_t menber,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v9; // x0

  if ( (byte_4B16E4A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&menber, method);
    sub_1BCA7E0(&long___TypeInfo, v5, v6);
    byte_4B16E4A = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, 0LL);
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&menber);
    v9 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1BCA888(long___TypeInfo, (unsigned int)v9->static_fields->SvtEquipMax);
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *__fastcall UserEventDeckEntity__GetEquipList_40804124(
        UserEventDeckEntity_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v11; // x0

  if ( (byte_4B16E4B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userSvtId, isInterruption);
    sub_1BCA7E0(&long___TypeInfo, v7, v8);
    byte_4B16E4B = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_39592416(deckInfo, userSvtId, isInterruption, 0LL);
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userSvtId);
    v11 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1BCA888(long___TypeInfo, (unsigned int)v11->static_fields->SvtEquipMax);
}


int32_t __fastcall UserEventDeckEntity__GetFollowerIndex(UserEventDeckEntity_o *this, const MethodInfo *method)
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
  if ( (byte_4B16E4E & 1) == 0 )
  {
    this = (UserEventDeckEntity_o *)sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B16E4E = 1;
  }
  deckInfo = v3->fields.deckInfo;
  if ( !deckInfo )
LABEL_16:
    sub_1BCAA3C(this, method);
  v5 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_16;
    max_length = svts->max_length;
    if ( (int)v5 >= max_length )
      return 0;
    if ( (unsigned int)v5 >= max_length )
      sub_1BCAA44(this, method);
    v8 = svts->m_Items[v5];
    if ( !v8 )
      goto LABEL_16;
    id = v8->fields.id;
    if ( id >= 1 )
    {
      this = (UserEventDeckEntity_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
        this = (UserEventDeckEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( id <= *(_DWORD *)(*(_QWORD *)&this[4].fields.eventId + 156LL)
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


System_Collections_Generic_List_int__o *__fastcall UserEventDeckEntity__GetFollowerIndexList(
        UserEventDeckEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *v11; // x19
  BalanceConfig_c *v12; // x0
  __int64 v13; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v17; // w21
  DeckServantData_o *v18; // x24
  int id; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10

  if ( (byte_4B16E4F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v9, v10);
    byte_4B16E4F = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_21;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_21;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1BCAA44(v12, v13);
      v18 = svts->m_Items[v17];
      if ( !v18 )
        break;
      id = v18->fields.id;
      if ( id >= 1 )
      {
        v12 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13);
          v12 = BalanceConfig_TypeInfo;
        }
        if ( id <= v12->static_fields->DeckMemberMax && v18->fields.isFollowerSvt )
        {
          if ( !v11 )
            break;
          v13 = (unsigned int)v18->fields.id;
          items = v11->fields._items;
          v21 = Method_System_Collections_Generic_List_int__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v11,
              v13,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v11->fields._size = size + 1;
            items->m_Items[size + 1] = v13;
          }
        }
      }
      max_length = svts->max_length;
      if ( (int)++v17 >= max_length )
        return v11;
    }
LABEL_21:
    sub_1BCAA3C(v12, v13);
  }
  return v11;
}


int64_t __fastcall UserEventDeckEntity__GetNpcFollowerServantId(
        UserEventDeckEntity_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)this->fields.deckInfo;
  if ( result )
    return DeckServant__GetNpcFollowerServantId((DeckServant_o *)result, pos, 0LL);
  return result;
}


System_Int64_array *__fastcall UserEventDeckEntity__GetNpcServantFollowerIds(
        UserEventDeckEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_long__o *v11; // x19
  __int64 v12; // x0
  int64_t npcFollowerSvtId; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v17; // w21
  DeckServantData_o *v18; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_4B16E4D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v9, v10);
    byte_4B16E4D = 1;
  }
  v11 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_17;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_17;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1BCAA44(v12, npcFollowerSvtId);
      v18 = svts->m_Items[v17];
      if ( !v18 )
        break;
      if ( !v11 )
        break;
      npcFollowerSvtId = v18->fields.npcFollowerSvtId;
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_long__Add__;
      ++v11->fields._version;
      if ( !items )
        break;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v11,
          npcFollowerSvtId,
          *(const MethodInfo_3589C90 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v11->fields._size = size + 1;
        items->m_Items[size] = npcFollowerSvtId;
      }
      max_length = svts->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BCAA3C(v12, npcFollowerSvtId);
  }
LABEL_15:
  if ( !v11 )
    goto LABEL_17;
  return System_Collections_Generic_List_long___ToArray(
           v11,
           (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
}


UserServantEntity_o *__fastcall UserEventDeckEntity__GetUserServant(
        UserEventDeckEntity_o *this,
        int32_t menber,
        const MethodInfo *method)
{
  UserServantEntity_o *result; // x0

  result = (UserServantEntity_o *)this->fields.deckInfo;
  if ( result )
    return DeckServant__GetUserServant((DeckServant_o *)result, menber, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_array *__fastcall UserEventDeckEntity__GetUserServantList(
        UserEventDeckEntity_o *this,
        int32_t wave,
        bool isInterruption,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *Master_object; // x22
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  BalanceConfig_c *v26; // x8
  Il2CppObject *v27; // x21
  __int64 v28; // x0
  __int64 v29; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x28
  int max_length; // w8
  UserServantEntity_array *v33; // x24
  int i; // w29
  DeckServantData_o *v35; // x25
  int id; // w21
  int v37; // w23
  int64_t *p_userSvtId; // x21
  struct DeckServant_o *v39; // x8
  struct DeckWaveServantData_array *waveSvts; // x26
  int v41; // w8
  unsigned int v42; // w27
  DeckWaveServantData_o *v43; // x8
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  Il2CppObject *v50; // x25
  Il2CppClass **v51; // x0
  int64_t UserId; // x2
  __int64 v53; // x2
  __int64 v54; // x3
  UserServantCollectionEntity_o *v55; // x26
  __int64 v56; // x25
  __int64 v57; // x1
  int64_t v58; // x26
  __int128 v59; // q0
  __int64 v61; // x0
  UserServantCollectionMaster_o *v62; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+40h] [xbp-90h]
  UserServantCollectionEntity_o *v67; // [xsp+60h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4B16E4C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&wave, isInterruption);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    sub_1BCA7E0(&UserServantEntity___TypeInfo, v19, v20);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v21, v22);
    byte_4B16E4C = 1;
  }
  v67 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&wave);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  v24 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v26 = BalanceConfig_TypeInfo;
  v27 = v24;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v25);
    v26 = BalanceConfig_TypeInfo;
  }
  v28 = sub_1BCA888(UserServantEntity___TypeInfo, (unsigned int)v26->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo || (svts = deckInfo->fields.svts, v62 = (UserServantCollectionMaster_o *)v27, !svts) )
LABEL_54:
    sub_1BCAA3C(v28, v29);
  max_length = svts->max_length;
  v33 = (UserServantEntity_array *)v28;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_56:
        sub_1BCAA44(v28, v29);
      v35 = svts->m_Items[i];
      if ( !v35 )
        goto LABEL_54;
      id = v35->fields.id;
      v37 = id - 1;
      if ( id < 1 )
        goto LABEL_49;
      if ( wave )
      {
        p_userSvtId = &v35->fields.userSvtId;
        if ( v35->fields.userSvtId < 1 )
          goto LABEL_49;
        if ( wave >= 1 )
        {
          v39 = this->fields.deckInfo;
          if ( !v39 )
            goto LABEL_54;
          waveSvts = v39->fields.waveSvts;
          if ( !waveSvts )
            goto LABEL_54;
          v41 = waveSvts->max_length;
          if ( v41 < 1 )
            goto LABEL_49;
          v42 = 0;
          while ( 1 )
          {
            if ( v42 >= v41 )
              goto LABEL_56;
            v43 = waveSvts->m_Items[v42];
            if ( !v43 )
              goto LABEL_54;
            if ( v43->fields.wave == wave )
            {
              v28 = System_Linq_Enumerable__Contains_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v43->fields.uniqueIds,
                      v35->fields.id,
                      (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
              if ( (v28 & 1) != 0 )
                break;
            }
            v41 = waveSvts->max_length;
            if ( (int)++v42 >= v41 )
              goto LABEL_49;
          }
          v28 = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v29);
            v28 = (__int64)BalanceConfig_TypeInfo;
          }
          v37 %= *(_DWORD *)(*(_QWORD *)(v28 + 184) + 160LL);
          if ( !Master_object )
            goto LABEL_54;
          goto LABEL_33;
        }
      }
      else
      {
        v28 = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v29);
          v28 = (__int64)BalanceConfig_TypeInfo;
        }
        if ( id > *(_DWORD *)(*(_QWORD *)(v28 + 184) + 156LL) )
          goto LABEL_49;
        p_userSvtId = &v35->fields.userSvtId;
        if ( v35->fields.userSvtId < 1 )
          goto LABEL_49;
        v37 = v35->fields.id - 1;
      }
      if ( !Master_object )
        goto LABEL_54;
LABEL_33:
      v28 = DataMasterBase_object__object__long___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              *p_userSvtId,
              (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (v28 & 1) != 0 )
      {
        if ( !v33 )
          goto LABEL_54;
LABEL_35:
        v50 = entity;
        if ( entity )
        {
          v28 = sub_1BCA91C(entity, v33->obj.klass->_1.element_class);
          if ( !v28 )
          {
            v61 = sub_1BCAA60(0LL);
            sub_1BCA908(v61, 0LL);
          }
        }
        if ( v37 >= v33->max_length )
          goto LABEL_56;
        v51 = &v33->obj.klass + v37;
        v51[4] = (Il2CppClass *)v50;
        sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 4), (int64_t)v50, v44, v45, v46, v47, v48, v49);
        goto LABEL_49;
      }
      if ( isInterruption )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29);
        UserId = NetworkManager__get_UserId(0LL);
        v28 = (__int64)v62;
        if ( !v62 )
          goto LABEL_54;
        v28 = UserServantCollectionMaster__TryGetEntity(v62, &v67, UserId, v35->fields.svtId, 0LL);
        if ( (v28 & 1) != 0 )
        {
          v55 = v67;
          v56 = sub_1BCAA2C(UserServantEntity_TypeInfo, v29, v53, v54);
          UserServantEntity___ctor_40924048((UserServantEntity_o *)v56, v55, 0LL);
          entity = (Il2CppObject *)v56;
          v58 = *p_userSvtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v57);
          v28 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v65, v58, 0LL);
          v66 = v65;
          if ( !v56 )
            goto LABEL_54;
          v59 = *(_OWORD *)&v66.fields.fakeValue;
          *(_OWORD *)(v56 + 16) = *(_OWORD *)&v66.fields.currentCryptoKey;
          *(_OWORD *)(v56 + 32) = v59;
          if ( !v33 )
            goto LABEL_54;
          goto LABEL_35;
        }
      }
LABEL_49:
      max_length = svts->max_length;
    }
  }
  return v33;
}


bool __fastcall UserEventDeckEntity__IsEquip(UserEventDeckEntity_o *this, int64_t userSvtId, const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0

  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    LOBYTE(deckInfo) = DeckServant__IsEquip(deckInfo, userSvtId, 0LL);
  return (char)deckInfo;
}