void __fastcall UserEventDeckEntity___ctor(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BD92 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BD92 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserEventDeckEntity___ctor_40073784(
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
  BalanceConfig_c *v18; // x0
  int32_t DeckMemberMax; // w21

  if ( (byte_4A5BD93 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    sub_1B885B0(&DeckServant_TypeInfo);
    byte_4A5BD93 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
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
    v15 = (DeckServant_o *)sub_1B887FC(DeckServant_TypeInfo);
    DeckServant___ctor_38870860(v15, DeckMemberMax, userEquipId, 0LL);
  }
  else
  {
    v15 = (DeckServant_o *)sub_1B887FC(DeckServant_TypeInfo);
    DeckServant___ctor_38871516(v15, waveNum, memberNum, userEquipId, 0LL);
  }
  this->fields.deckInfo = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.deckInfo, (int32_t)v15, v16, v17);
}


System_String_o *__fastcall UserEventDeckEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  if ( (byte_4A5BD94 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4A5BD94 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           deckNo,
           (const MethodInfo_2E7E178 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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

  if ( (byte_4A5BD95 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&long___TypeInfo);
    byte_4A5BD95 = 1;
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
  return (System_Int64_array *)sub_1B88658(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
}


System_Int64_array *__fastcall UserEventDeckEntity__GetEquipList_40074356(
        UserEventDeckEntity_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v9; // x0

  if ( (byte_4A5BD96 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&long___TypeInfo);
    byte_4A5BD96 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_38873804(deckInfo, userSvtId, isInterruption, 0LL);
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1B88658(long___TypeInfo, (unsigned int)v9->static_fields->SvtEquipMax);
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
  if ( (byte_4A5BD99 & 1) == 0 )
  {
    this = (UserEventDeckEntity_o *)sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A5BD99 = 1;
  }
  deckInfo = v2->fields.deckInfo;
  if ( !deckInfo )
LABEL_16:
    sub_1B8880C(this, method);
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
      sub_1B88814(this, method);
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

  if ( (byte_4A5BD9A & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5BD9A = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1B88814(v4, v5);
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
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
    sub_1B8880C(v4, v5);
  }
  return v3;
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

  if ( (byte_4A5BD98 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    byte_4A5BD98 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
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
        sub_1B88814(v4, npcFollowerSvtId);
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
          *(const MethodInfo_34E5868 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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
    sub_1B8880C(v4, npcFollowerSvtId);
  }
LABEL_15:
  if ( !v3 )
    goto LABEL_17;
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
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
  struct DeckServantData_array *svts; // x28
  int max_length; // w8
  UserServantEntity_array *v14; // x24
  int i; // w29
  DeckServantData_o *v16; // x25
  int id; // w21
  int v18; // w23
  int64_t *p_userSvtId; // x21
  struct DeckServant_o *v20; // x8
  struct DeckWaveServantData_array *waveSvts; // x26
  int v22; // w8
  unsigned int v23; // w27
  DeckWaveServantData_o *v24; // x8
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x25
  Il2CppClass **v28; // x0
  int64_t UserId; // x2
  UserServantCollectionEntity_o *v30; // x26
  __int64 v31; // x25
  int64_t v32; // x26
  __int128 v33; // q0
  __int64 v35; // x0
  UserServantCollectionMaster_o *v36; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-90h]
  UserServantCollectionEntity_o *v41; // [xsp+60h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4A5BD97 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserServantEntity___TypeInfo);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5BD97 = 1;
  }
  v41 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v7 = BalanceConfig_TypeInfo;
  v8 = v6;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v9 = sub_1B88658(UserServantEntity___TypeInfo, (unsigned int)v7->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo || (svts = deckInfo->fields.svts, v36 = (UserServantCollectionMaster_o *)v8, !svts) )
LABEL_54:
    sub_1B8880C(v9, v10);
  max_length = svts->max_length;
  v14 = (UserServantEntity_array *)v9;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_56:
        sub_1B88814(v9, v10);
      v16 = svts->m_Items[i];
      if ( !v16 )
        goto LABEL_54;
      id = v16->fields.id;
      v18 = id - 1;
      if ( id < 1 )
        goto LABEL_49;
      if ( wave )
      {
        p_userSvtId = &v16->fields.userSvtId;
        if ( v16->fields.userSvtId < 1 )
          goto LABEL_49;
        if ( wave >= 1 )
        {
          v20 = this->fields.deckInfo;
          if ( !v20 )
            goto LABEL_54;
          waveSvts = v20->fields.waveSvts;
          if ( !waveSvts )
            goto LABEL_54;
          v22 = waveSvts->max_length;
          if ( v22 < 1 )
            goto LABEL_49;
          v23 = 0;
          while ( 1 )
          {
            if ( v23 >= v22 )
              goto LABEL_56;
            v24 = waveSvts->m_Items[v23];
            if ( !v24 )
              goto LABEL_54;
            if ( v24->fields.wave == wave )
            {
              v9 = System_Linq_Enumerable__Contains_int_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v24->fields.uniqueIds,
                     v16->fields.id,
                     (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( (v9 & 1) != 0 )
                break;
            }
            v22 = waveSvts->max_length;
            if ( (int)++v23 >= v22 )
              goto LABEL_49;
          }
          v9 = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v9 = (__int64)BalanceConfig_TypeInfo;
          }
          v18 %= *(_DWORD *)(*(_QWORD *)(v9 + 184) + 160LL);
          if ( !Master_object )
            goto LABEL_54;
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
          goto LABEL_49;
        p_userSvtId = &v16->fields.userSvtId;
        if ( v16->fields.userSvtId < 1 )
          goto LABEL_49;
        v18 = v16->fields.id - 1;
      }
      if ( !Master_object )
        goto LABEL_54;
LABEL_33:
      v9 = DataMasterBase_object__object__long___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             *p_userSvtId,
             (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (v9 & 1) != 0 )
      {
        if ( !v14 )
          goto LABEL_54;
LABEL_35:
        v27 = entity;
        if ( entity )
        {
          v9 = sub_1B886EC(entity, v14->obj.klass->_1.element_class);
          if ( !v9 )
          {
            v35 = sub_1B88830(0LL);
            sub_1B886D8(v35, 0LL);
          }
        }
        if ( v18 >= v14->max_length )
          goto LABEL_56;
        v28 = &v14->obj.klass + v18;
        v28[4] = (Il2CppClass *)v27;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v27, v25, v26);
        goto LABEL_49;
      }
      if ( isInterruption )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        UserId = NetworkManager__get_UserId(0LL);
        v9 = (__int64)v36;
        if ( !v36 )
          goto LABEL_54;
        v9 = UserServantCollectionMaster__TryGetEntity(v36, &v41, UserId, v16->fields.svtId, 0LL);
        if ( (v9 & 1) != 0 )
        {
          v30 = v41;
          v31 = sub_1B887FC(UserServantEntity_TypeInfo);
          UserServantEntity___ctor_40192616((UserServantEntity_o *)v31, v30, 0LL);
          entity = (Il2CppObject *)v31;
          v32 = *p_userSvtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v9 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v39, v32, 0LL);
          v40 = v39;
          if ( !v31 )
            goto LABEL_54;
          v33 = *(_OWORD *)&v40.fields.fakeValue;
          *(_OWORD *)(v31 + 16) = *(_OWORD *)&v40.fields.currentCryptoKey;
          *(_OWORD *)(v31 + 32) = v33;
          if ( !v14 )
            goto LABEL_54;
          goto LABEL_35;
        }
      }
LABEL_49:
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