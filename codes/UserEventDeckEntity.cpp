void __fastcall UserEventDeckEntity___ctor(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD1E5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_string___ctor__);
    byte_4BDD1E5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_325995C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserEventDeckEntity___ctor_41343388(
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  BalanceConfig_c *v22; // x0
  int32_t DeckMemberMax; // w21

  if ( (byte_4BDD1E6 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataEntityBase_string___ctor__);
    sub_1C21E38(&DeckServant_TypeInfo);
    byte_4BDD1E6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_325995C *)Method_DataEntityBase_string___ctor__);
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
    v15 = (DeckServant_o *)sub_1C22084(DeckServant_TypeInfo);
    DeckServant___ctor_40129440(v15, DeckMemberMax, userEquipId, 0LL);
  }
  else
  {
    v15 = (DeckServant_o *)sub_1C22084(DeckServant_TypeInfo);
    DeckServant___ctor_40130096(v15, waveNum, memberNum, userEquipId, 0LL);
  }
  this->fields.deckInfo = v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.deckInfo, (int64_t)v15, v16, v17, v18, v19, v20, v21);
}


System_String_o *__fastcall UserEventDeckEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  if ( (byte_4BDD1E7 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4BDD1E7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           deckNo,
           (const MethodInfo_2FAE674 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventDeckEntity__CreatePrimaryKey(
        UserEventDeckEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventDeckEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.deckNo, v2);
}


System_Int64_array *__fastcall UserEventDeckEntity__GetEquipList(
        UserEventDeckEntity_o *this,
        int32_t menber,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v7; // x0

  if ( (byte_4BDD1E8 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&long___TypeInfo);
    byte_4BDD1E8 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, 0LL);
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1C21EE0(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
}


System_Int64_array *__fastcall UserEventDeckEntity__GetEquipList_41343960(
        UserEventDeckEntity_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v9; // x0

  if ( (byte_4BDD1E9 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&long___TypeInfo);
    byte_4BDD1E9 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_40132212(deckInfo, userSvtId, isInterruption, 0LL);
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1C21EE0(long___TypeInfo, (unsigned int)v9->static_fields->SvtEquipMax);
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
  if ( (byte_4BDD1EC & 1) == 0 )
  {
    this = (UserEventDeckEntity_o *)sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BDD1EC = 1;
  }
  deckInfo = v2->fields.deckInfo;
  if ( !deckInfo )
LABEL_16:
    sub_1C22094(this, method);
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
      sub_1C2209C(this, method);
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

  if ( (byte_4BDD1ED & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDD1ED = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1C2209C(v4, v5);
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
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              v5,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size + 1] = v5;
          }
        }
      }
      max_length = svts->max_length;
      if ( (int)++v9 >= max_length )
        return v3;
    }
LABEL_21:
    sub_1C22094(v4, v5);
  }
  return v3;
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

  if ( (byte_4BDD1EB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_long__TypeInfo);
    byte_4BDD1EB = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C22084(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_3636894 *)Method_System_Collections_Generic_List_long___ctor__);
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
        sub_1C2209C(v4, npcFollowerSvtId);
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
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          npcFollowerSvtId,
          *(const MethodInfo_36370E8 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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
    sub_1C22094(v4, npcFollowerSvtId);
  }
LABEL_15:
  if ( !v3 )
    goto LABEL_17;
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_3638BA0 *)Method_System_Collections_Generic_List_long__ToArray__);
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


UserServantEntity_array *__fastcall UserEventDeckEntity__GetUserServantList(
        UserEventDeckEntity_o *this,
        int32_t wave,
        bool isInterruption,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  Il2CppObject *v6; // x0
  BalanceConfig_c *v7; // x8
  Il2CppObject *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x29
  int max_length; // w8
  UserServantEntity_array *v14; // x24
  int i; // w25
  DeckServantData_o *v16; // x26
  int id; // w21
  int v18; // w23
  int64_t *p_userSvtId; // x21
  struct DeckServant_o *v20; // x8
  struct DeckWaveServantData_array *waveSvts; // x27
  int v22; // w8
  unsigned int v23; // w28
  DeckWaveServantData_o *v24; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x10
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *v32; // x26
  Il2CppClass **v33; // x0
  UserServantCollectionEntity_o *v34; // x27
  __int64 v35; // x26
  int64_t v36; // x27
  __int128 v37; // q0
  __int64 v39; // x0
  UserServantCollectionMaster_o *v40; // [xsp+0h] [xbp-D0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+40h] [xbp-90h]
  UserServantCollectionEntity_o *v45; // [xsp+60h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4BDD1EA & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&UserServantEntity___TypeInfo);
    sub_1C21E38(&UserServantEntity_TypeInfo);
    byte_4BDD1EA = 1;
  }
  v45 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v7 = BalanceConfig_TypeInfo;
  v8 = v6;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v9 = sub_1C21EE0(UserServantEntity___TypeInfo, (unsigned int)v7->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo || (svts = deckInfo->fields.svts, v40 = (UserServantCollectionMaster_o *)v8, !svts) )
LABEL_58:
    sub_1C22094(v9, v10);
  max_length = svts->max_length;
  v14 = (UserServantEntity_array *)v9;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_60:
        sub_1C2209C(v9, v10);
      v16 = svts->m_Items[i];
      if ( !v16 )
        goto LABEL_58;
      id = v16->fields.id;
      v18 = id - 1;
      if ( id < 1 )
        goto LABEL_53;
      if ( wave )
      {
        p_userSvtId = &v16->fields.userSvtId;
        if ( v16->fields.userSvtId < 1 )
          goto LABEL_53;
        if ( wave >= 1 )
        {
          v20 = this->fields.deckInfo;
          if ( !v20 )
            goto LABEL_58;
          waveSvts = v20->fields.waveSvts;
          if ( !waveSvts )
            goto LABEL_58;
          v22 = waveSvts->max_length;
          if ( v22 < 1 )
            goto LABEL_53;
          v23 = 0;
          while ( 1 )
          {
            if ( v23 >= v22 )
              goto LABEL_60;
            v24 = waveSvts->m_Items[v23];
            if ( !v24 )
              goto LABEL_58;
            if ( v24->fields.wave == wave )
            {
              v9 = System_Linq_Enumerable__Contains_int_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v24->fields.uniqueIds,
                     v16->fields.id,
                     (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( (v9 & 1) != 0 )
                break;
            }
            v22 = waveSvts->max_length;
            if ( (int)++v23 >= v22 )
              goto LABEL_53;
          }
          v9 = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v9 = (__int64)BalanceConfig_TypeInfo;
          }
          v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
          v18 %= *(_DWORD *)(*(_QWORD *)(v9 + 184) + 160LL);
          if ( !Master_object )
            goto LABEL_58;
          goto LABEL_33;
        }
      }
      else
      {
        v9 = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v9 = (__int64)BalanceConfig_TypeInfo;
        }
        if ( id > *(_DWORD *)(*(_QWORD *)(v9 + 184) + 156LL) )
          goto LABEL_53;
        p_userSvtId = &v16->fields.userSvtId;
        if ( v16->fields.userSvtId < 1 )
          goto LABEL_53;
        v18 = v16->fields.id - 1;
      }
      v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !Master_object )
        goto LABEL_58;
LABEL_33:
      v9 = DataMasterBase_object__object__long___TryGetEntity(
             v25,
             &entity,
             *p_userSvtId,
             (const MethodInfo_325E370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (v9 & 1) != 0 )
      {
        if ( !v14 )
          goto LABEL_58;
LABEL_35:
        v32 = entity;
        if ( entity )
        {
          v9 = sub_1C21F74(entity, v14->obj.klass->_1.element_class);
          if ( !v9 )
          {
            v39 = sub_1C220B8(0LL);
            sub_1C21F60(v39, 0LL);
          }
        }
        if ( v18 >= v14->max_length )
          goto LABEL_60;
        v33 = &v14->obj.klass + v18;
        v33[4] = (Il2CppClass *)v32;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v32, v26, v27, v28, v29, v30, v31);
        goto LABEL_53;
      }
      if ( isInterruption )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BD6FF5 )
        {
          sub_1C21E38(&NetworkManager_TypeInfo);
          byte_4BD6FF5 = 1;
        }
        v9 = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v9 = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v40 )
          goto LABEL_58;
        v9 = UserServantCollectionMaster__TryGetEntity(
               v40,
               &v45,
               *(_QWORD *)(*(_QWORD *)(v9 + 184) + 64LL),
               v16->fields.svtId,
               0LL);
        if ( (v9 & 1) != 0 )
        {
          v34 = v45;
          v35 = sub_1C22084(UserServantEntity_TypeInfo);
          UserServantEntity___ctor_41466424((UserServantEntity_o *)v35, v34, 0LL);
          entity = (Il2CppObject *)v35;
          v36 = *p_userSvtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v9 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v43, v36, 0LL);
          v44 = v43;
          if ( !v35 )
            goto LABEL_58;
          v37 = *(_OWORD *)&v44.fields.fakeValue;
          *(_OWORD *)(v35 + 16) = *(_OWORD *)&v44.fields.currentCryptoKey;
          *(_OWORD *)(v35 + 32) = v37;
          if ( !v14 )
            goto LABEL_58;
          goto LABEL_35;
        }
      }
LABEL_53:
      max_length = svts->max_length;
    }
  }
  return v14;
}


bool __fastcall UserEventDeckEntity__IsEquip(UserEventDeckEntity_o *this, int64_t userSvtId, const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0

  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    LOBYTE(deckInfo) = DeckServant__IsEquip(deckInfo, userSvtId, 0LL);
  return (char)deckInfo;
}