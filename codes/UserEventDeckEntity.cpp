void __fastcall UserEventDeckEntity___ctor(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B37E04 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataEntityBase_string___ctor__, method);
    byte_4B37E04 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31D1D68 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserEventDeckEntity___ctor_40895740(
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
  __int64 v16; // x1
  DeckServant_o *v17; // x23
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  BalanceConfig_c *v24; // x0
  int32_t DeckMemberMax; // w21

  if ( (byte_4B37E05 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, userId);
    sub_1BD3458(&Method_DataEntityBase_string___ctor__, v15);
    sub_1BD3458(&DeckServant_TypeInfo, v16);
    byte_4B37E05 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31D1D68 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.deckNo = deckNo;
  if ( waveNum < 1 || memberNum < 1 )
  {
    v24 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v24->static_fields->DeckMemberMax;
    v17 = (DeckServant_o *)sub_1BD36A4(DeckServant_TypeInfo);
    DeckServant___ctor_39661344(v17, DeckMemberMax, userEquipId, 0LL);
  }
  else
  {
    v17 = (DeckServant_o *)sub_1BD36A4(DeckServant_TypeInfo);
    DeckServant___ctor_39662000(v17, waveNum, memberNum, userEquipId, 0LL);
  }
  this->fields.deckInfo = v17;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.deckInfo, (int64_t)v17, v18, v19, v20, v21, v22, v23);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventDeckEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  if ( (byte_4B37E06 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&eventId);
    byte_4B37E06 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           deckNo,
           (const MethodInfo_2F2FEF4 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v8; // x0

  if ( (byte_4B37E07 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, *(_QWORD *)&menber);
    sub_1BD3458(&long___TypeInfo, v5);
    byte_4B37E07 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1BD3500(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
}


System_Int64_array *__fastcall UserEventDeckEntity__GetEquipList_40896312(
        UserEventDeckEntity_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  __int64 v7; // x1
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v10; // x0

  if ( (byte_4B37E08 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, userSvtId);
    sub_1BD3458(&long___TypeInfo, v7);
    byte_4B37E08 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_39664288(deckInfo, userSvtId, isInterruption, 0LL);
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1BD3500(long___TypeInfo, (unsigned int)v10->static_fields->SvtEquipMax);
}


int32_t __fastcall UserEventDeckEntity__GetFollowerIndex(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  UserEventDeckEntity_o *v2; // x19
  struct DeckServant_o *deckInfo; // x8
  __int64 v4; // x20
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v7; // x22
  int id; // w23

  v2 = this;
  if ( (byte_4B37E0B & 1) == 0 )
  {
    this = (UserEventDeckEntity_o *)sub_1BD3458(&BalanceConfig_TypeInfo, method);
    byte_4B37E0B = 1;
  }
  deckInfo = v2->fields.deckInfo;
  if ( !deckInfo )
LABEL_16:
    sub_1BD36B4(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_16;
    max_length = svts->max_length;
    if ( (int)v4 >= max_length )
      return 0;
    if ( (unsigned int)v4 >= max_length )
      sub_1BD36BC(this, method);
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
      if ( id <= *(_DWORD *)(*(_QWORD *)&this[4].fields.eventId + 156LL)
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


System_Collections_Generic_List_int__o *__fastcall UserEventDeckEntity__GetFollowerIndexList(
        UserEventDeckEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x19
  BalanceConfig_c *v7; // x0
  __int64 v8; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v12; // w21
  DeckServantData_o *v13; // x24
  int id; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_4B37E0C & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4B37E0C = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_21;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_21;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1BD36BC(v7, v8);
      v13 = svts->m_Items[v12];
      if ( !v13 )
        break;
      id = v13->fields.id;
      if ( id >= 1 )
      {
        v7 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v7 = BalanceConfig_TypeInfo;
        }
        if ( id <= v7->static_fields->DeckMemberMax && v13->fields.isFollowerSvt )
        {
          if ( !v6 )
            break;
          v8 = (unsigned int)v13->fields.id;
          items = v6->fields._items;
          v16 = Method_System_Collections_Generic_List_int__Add__;
          ++v6->fields._version;
          if ( !items )
            break;
          size = v6->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v6,
              v8,
              *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v6->fields._size = size + 1;
            items->m_Items[size + 1] = v8;
          }
        }
      }
      max_length = svts->max_length;
      if ( (int)++v12 >= max_length )
        return v6;
    }
LABEL_21:
    sub_1BD36B4(v7, v8);
  }
  return v6;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_long__o *v6; // x19
  __int64 v7; // x0
  int64_t npcFollowerSvtId; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v12; // w21
  DeckServantData_o *v13; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  if ( (byte_4B37E0A & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_long__ToArray__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_long___ctor__, v4);
    sub_1BD3458(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_4B37E0A = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_1BD36A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_35A8570 *)Method_System_Collections_Generic_List_long___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_17;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_17;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1BD36BC(v7, npcFollowerSvtId);
      v13 = svts->m_Items[v12];
      if ( !v13 )
        break;
      if ( !v6 )
        break;
      npcFollowerSvtId = v13->fields.npcFollowerSvtId;
      items = v6->fields._items;
      v15 = Method_System_Collections_Generic_List_long__Add__;
      ++v6->fields._version;
      if ( !items )
        break;
      size = v6->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v6,
          npcFollowerSvtId,
          *(const MethodInfo_35A8DC4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size] = npcFollowerSvtId;
      }
      max_length = svts->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BD36B4(v7, npcFollowerSvtId);
  }
LABEL_15:
  if ( !v6 )
    goto LABEL_17;
  return System_Collections_Generic_List_long___ToArray(
           v6,
           (const MethodInfo_35AA87C *)Method_System_Collections_Generic_List_long__ToArray__);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v15; // x0
  BalanceConfig_c *v16; // x8
  Il2CppObject *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x29
  int max_length; // w8
  UserServantEntity_array *v23; // x24
  int i; // w25
  DeckServantData_o *v25; // x26
  int id; // w21
  int v27; // w23
  int64_t *p_userSvtId; // x21
  struct DeckServant_o *v29; // x8
  struct DeckWaveServantData_array *waveSvts; // x27
  int v31; // w8
  unsigned int v32; // w28
  DeckWaveServantData_o *v33; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x10
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  Il2CppObject *v41; // x26
  Il2CppClass **v42; // x0
  UserServantCollectionEntity_o *v43; // x27
  __int64 v44; // x26
  int64_t v45; // x27
  __int128 v46; // q0
  __int64 v48; // x0
  UserServantCollectionMaster_o *v49; // [xsp+0h] [xbp-D0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+40h] [xbp-90h]
  UserServantCollectionEntity_o *v54; // [xsp+60h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4B37E09 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, *(_QWORD *)&wave);
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v5);
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_1BD3458(&DataManager_TypeInfo, v7);
    sub_1BD3458(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1BD3458(&Method_System_Linq_Enumerable_Contains_int___, v9);
    sub_1BD3458(&NetworkManager_TypeInfo, v10);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1BD3458(&UserServantEntity___TypeInfo, v12);
    sub_1BD3458(&UserServantEntity_TypeInfo, v13);
    byte_4B37E09 = 1;
  }
  v54 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantMaster___);
  v15 = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v16 = BalanceConfig_TypeInfo;
  v17 = v15;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v18 = sub_1BD3500(UserServantEntity___TypeInfo, (unsigned int)v16->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo || (svts = deckInfo->fields.svts, v49 = (UserServantCollectionMaster_o *)v17, !svts) )
LABEL_58:
    sub_1BD36B4(v18, v19);
  max_length = svts->max_length;
  v23 = (UserServantEntity_array *)v18;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_60:
        sub_1BD36BC(v18, v19);
      v25 = svts->m_Items[i];
      if ( !v25 )
        goto LABEL_58;
      id = v25->fields.id;
      v27 = id - 1;
      if ( id < 1 )
        goto LABEL_53;
      if ( wave )
      {
        p_userSvtId = &v25->fields.userSvtId;
        if ( v25->fields.userSvtId < 1 )
          goto LABEL_53;
        if ( wave >= 1 )
        {
          v29 = this->fields.deckInfo;
          if ( !v29 )
            goto LABEL_58;
          waveSvts = v29->fields.waveSvts;
          if ( !waveSvts )
            goto LABEL_58;
          v31 = waveSvts->max_length;
          if ( v31 < 1 )
            goto LABEL_53;
          v32 = 0;
          while ( 1 )
          {
            if ( v32 >= v31 )
              goto LABEL_60;
            v33 = waveSvts->m_Items[v32];
            if ( !v33 )
              goto LABEL_58;
            if ( v33->fields.wave == wave )
            {
              v18 = System_Linq_Enumerable__Contains_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v33->fields.uniqueIds,
                      v25->fields.id,
                      (const MethodInfo_2F49970 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( (v18 & 1) != 0 )
                break;
            }
            v31 = waveSvts->max_length;
            if ( (int)++v32 >= v31 )
              goto LABEL_53;
          }
          v18 = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v18 = (__int64)BalanceConfig_TypeInfo;
          }
          v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
          v27 %= *(_DWORD *)(*(_QWORD *)(v18 + 184) + 160LL);
          if ( !Master_object )
            goto LABEL_58;
          goto LABEL_33;
        }
      }
      else
      {
        v18 = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v18 = (__int64)BalanceConfig_TypeInfo;
        }
        if ( id > *(_DWORD *)(*(_QWORD *)(v18 + 184) + 156LL) )
          goto LABEL_53;
        p_userSvtId = &v25->fields.userSvtId;
        if ( v25->fields.userSvtId < 1 )
          goto LABEL_53;
        v27 = v25->fields.id - 1;
      }
      v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !Master_object )
        goto LABEL_58;
LABEL_33:
      v18 = DataMasterBase_object__object__long___TryGetEntity(
              v34,
              &entity,
              *p_userSvtId,
              (const MethodInfo_31D20F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (v18 & 1) != 0 )
      {
        if ( !v23 )
          goto LABEL_58;
LABEL_35:
        v41 = entity;
        if ( entity )
        {
          v18 = sub_1BD3594(entity, v23->obj.klass->_1.element_class);
          if ( !v18 )
          {
            v48 = sub_1BD36D8(0LL);
            sub_1BD3580(v48, 0LL);
          }
        }
        if ( v27 >= v23->max_length )
          goto LABEL_60;
        v42 = &v23->obj.klass + v27;
        v42[4] = (Il2CppClass *)v41;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)v41, v35, v36, v37, v38, v39, v40);
        goto LABEL_53;
      }
      if ( isInterruption )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B31D77 )
        {
          sub_1BD3458(&NetworkManager_TypeInfo, v19);
          byte_4B31D77 = 1;
        }
        v18 = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v18 = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v49 )
          goto LABEL_58;
        v18 = UserServantCollectionMaster__TryGetEntity(
                v49,
                &v54,
                *(_QWORD *)(*(_QWORD *)(v18 + 184) + 64LL),
                v25->fields.svtId,
                0LL);
        if ( (v18 & 1) != 0 )
        {
          v43 = v54;
          v44 = sub_1BD36A4(UserServantEntity_TypeInfo);
          UserServantEntity___ctor_41020212((UserServantEntity_o *)v44, v43, 0LL);
          entity = (Il2CppObject *)v44;
          v45 = *p_userSvtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v18 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v52, v45, 0LL);
          v53 = v52;
          if ( !v44 )
            goto LABEL_58;
          v46 = *(_OWORD *)&v53.fields.fakeValue;
          *(_OWORD *)(v44 + 16) = *(_OWORD *)&v53.fields.currentCryptoKey;
          *(_OWORD *)(v44 + 32) = v46;
          if ( !v23 )
            goto LABEL_58;
          goto LABEL_35;
        }
      }
LABEL_53:
      max_length = svts->max_length;
    }
  }
  return v23;
}


bool __fastcall UserEventDeckEntity__IsEquip(UserEventDeckEntity_o *this, int64_t userSvtId, const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0

  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    LOBYTE(deckInfo) = DeckServant__IsEquip(deckInfo, userSvtId, 0LL);
  return (char)deckInfo;
}