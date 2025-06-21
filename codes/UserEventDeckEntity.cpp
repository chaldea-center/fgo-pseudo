void __fastcall UserEventDeckEntity___ctor(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D294 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1D294 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserEventDeckEntity___ctor_42169692(
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  BalanceConfig_c *v20; // x0
  int32_t DeckMemberMax; // w21

  if ( (byte_4B1D295 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, userId);
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, v15);
    sub_1BCAFF8(&DeckServant_TypeInfo, v16);
    byte_4B1D295 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.deckNo = deckNo;
  if ( waveNum < 1 || memberNum < 1 )
  {
    v20 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v20 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v20->static_fields->DeckMemberMax;
    v17 = (DeckServant_o *)sub_1BCB244(DeckServant_TypeInfo);
    DeckServant___ctor_40870824(v17, DeckMemberMax, userEquipId, 0LL);
  }
  else
  {
    v17 = (DeckServant_o *)sub_1BCB244(DeckServant_TypeInfo);
    DeckServant___ctor_40871480(v17, waveNum, memberNum, userEquipId, 0LL);
  }
  this->fields.deckInfo = v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.deckInfo, (int32_t)v17, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventDeckEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  if ( (byte_4B1D296 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&eventId);
    byte_4B1D296 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           deckNo,
           (const MethodInfo_3019278 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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

  if ( (byte_4B1D297 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&menber);
    sub_1BCAFF8(&long___TypeInfo, v5);
    byte_4B1D297 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, -1, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1BCB0A0(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
}


System_Int64_array *__fastcall UserEventDeckEntity__GetEquipList_42170268(
        UserEventDeckEntity_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  __int64 v7; // x1
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v10; // x0

  if ( (byte_4B1D298 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, userSvtId);
    sub_1BCAFF8(&long___TypeInfo, v7);
    byte_4B1D298 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_40873596(deckInfo, userSvtId, isInterruption, 0LL);
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1BCB0A0(long___TypeInfo, (unsigned int)v10->static_fields->SvtEquipMax);
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
  if ( (byte_4B1D29C & 1) == 0 )
  {
    this = (UserEventDeckEntity_o *)sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    byte_4B1D29C = 1;
  }
  deckInfo = v3->fields.deckInfo;
  if ( !deckInfo )
LABEL_16:
    sub_1BCB254(this, method);
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
      sub_1BCB25C(this, method, v2);
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
  __int64 v9; // x2
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v13; // w21
  DeckServantData_o *v14; // x24
  int id; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10

  if ( (byte_4B1D29D & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4B1D29D = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_21;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_21;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1BCB25C(v7, v8, v9);
      v14 = svts->m_Items[v13];
      if ( !v14 )
        break;
      id = v14->fields.id;
      if ( id >= 1 )
      {
        v7 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v7 = BalanceConfig_TypeInfo;
        }
        if ( id <= v7->static_fields->DeckMemberMax && v14->fields.isFollowerSvt )
        {
          if ( !v6 )
            break;
          v8 = (unsigned int)v14->fields.id;
          items = v6->fields._items;
          v17 = Method_System_Collections_Generic_List_int__Add__;
          ++v6->fields._version;
          if ( !items )
            break;
          size = v6->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v6,
              v8,
              *(const MethodInfo_369CBAC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v6->fields._size = size + 1;
            items->m_Items[size + 1] = v8;
          }
        }
      }
      max_length = svts->max_length;
      if ( (int)++v13 >= max_length )
        return v6;
    }
LABEL_21:
    sub_1BCB254(v7, v8);
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *__fastcall UserEventDeckEntity__GetGrandEquipList(
        UserEventDeckEntity_o *this,
        int32_t memberIdx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v8; // x0

  if ( (byte_4B1D299 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&memberIdx);
    sub_1BCAFF8(&long___TypeInfo, v5);
    byte_4B1D299 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetGrandEquipList(deckInfo, memberIdx, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1BCB0A0(long___TypeInfo, (unsigned int)v8->static_fields->GrandSvtEquipMax);
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
  __int64 v9; // x2
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v13; // w21
  DeckServantData_o *v14; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_4B1D29B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__ToArray__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long___ctor__, v4);
    sub_1BCAFF8(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_4B1D29B = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_1BCB244(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_36A13B0 *)Method_System_Collections_Generic_List_long___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_17;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_17;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1BCB25C(v7, npcFollowerSvtId, v9);
      v14 = svts->m_Items[v13];
      if ( !v14 )
        break;
      if ( !v6 )
        break;
      npcFollowerSvtId = v14->fields.npcFollowerSvtId;
      items = v6->fields._items;
      v16 = Method_System_Collections_Generic_List_long__Add__;
      ++v6->fields._version;
      if ( !items )
        break;
      size = v6->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v6,
          npcFollowerSvtId,
          *(const MethodInfo_36A1C04 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size] = npcFollowerSvtId;
      }
      max_length = svts->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BCB254(v7, npcFollowerSvtId);
  }
LABEL_15:
  if ( !v6 )
    goto LABEL_17;
  return System_Collections_Generic_List_long___ToArray(
           v6,
           (const MethodInfo_36A36BC *)Method_System_Collections_Generic_List_long__ToArray__);
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
  __int64 v20; // x2
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x29
  int max_length; // w8
  UserServantEntity_array *v24; // x24
  int i; // w25
  DeckServantData_o *v26; // x26
  int id; // w21
  int v28; // w23
  int64_t *p_userSvtId; // x21
  struct DeckServant_o *v30; // x8
  struct DeckWaveServantData_array *waveSvts; // x27
  int v32; // w8
  unsigned int v33; // w28
  DeckWaveServantData_o *v34; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x10
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x26
  Il2CppClass **v38; // x0
  UserServantCollectionEntity_o *v39; // x27
  __int64 v40; // x26
  int64_t v41; // x27
  __int128 v42; // q0
  __int64 v44; // x0
  UserServantCollectionMaster_o *v45; // [xsp+0h] [xbp-D0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+40h] [xbp-90h]
  UserServantCollectionEntity_o *v50; // [xsp+60h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4B1D29A & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&wave);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, v9);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1BCAFF8(&UserServantEntity___TypeInfo, v12);
    sub_1BCAFF8(&UserServantEntity_TypeInfo, v13);
    byte_4B1D29A = 1;
  }
  v50 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantMaster___);
  v15 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v16 = BalanceConfig_TypeInfo;
  v17 = v15;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v18 = sub_1BCB0A0(UserServantEntity___TypeInfo, (unsigned int)v16->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo || (svts = deckInfo->fields.svts, v45 = (UserServantCollectionMaster_o *)v17, !svts) )
LABEL_58:
    sub_1BCB254(v18, v19);
  max_length = svts->max_length;
  v24 = (UserServantEntity_array *)v18;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_60:
        sub_1BCB25C(v18, v19, v20);
      v26 = svts->m_Items[i];
      if ( !v26 )
        goto LABEL_58;
      id = v26->fields.id;
      v28 = id - 1;
      if ( id < 1 )
        goto LABEL_53;
      if ( wave )
      {
        p_userSvtId = &v26->fields.userSvtId;
        if ( v26->fields.userSvtId < 1 )
          goto LABEL_53;
        if ( wave >= 1 )
        {
          v30 = this->fields.deckInfo;
          if ( !v30 )
            goto LABEL_58;
          waveSvts = v30->fields.waveSvts;
          if ( !waveSvts )
            goto LABEL_58;
          v32 = waveSvts->max_length;
          if ( v32 < 1 )
            goto LABEL_53;
          v33 = 0;
          while ( 1 )
          {
            if ( v33 >= v32 )
              goto LABEL_60;
            v34 = waveSvts->m_Items[v33];
            if ( !v34 )
              goto LABEL_58;
            if ( v34->fields.wave == wave )
            {
              v18 = System_Linq_Enumerable__Contains_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v34->fields.uniqueIds,
                      v26->fields.id,
                      (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___);
              if ( (v18 & 1) != 0 )
                break;
            }
            v32 = waveSvts->max_length;
            if ( (int)++v33 >= v32 )
              goto LABEL_53;
          }
          v18 = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v18 = (__int64)BalanceConfig_TypeInfo;
          }
          v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
          v28 %= *(_DWORD *)(*(_QWORD *)(v18 + 184) + 176LL);
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
        if ( id > *(_DWORD *)(*(_QWORD *)(v18 + 184) + 172LL) )
          goto LABEL_53;
        p_userSvtId = &v26->fields.userSvtId;
        if ( v26->fields.userSvtId < 1 )
          goto LABEL_53;
        v28 = v26->fields.id - 1;
      }
      v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !Master_object )
        goto LABEL_58;
LABEL_33:
      v18 = DataMasterBase_object__object__long___TryGetEntity(
              v35,
              &entity,
              *p_userSvtId,
              (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (v18 & 1) != 0 )
      {
        if ( !v24 )
          goto LABEL_58;
LABEL_35:
        v37 = entity;
        if ( entity )
        {
          v18 = sub_1BCB134(entity, v24->obj.klass->_1.element_class);
          if ( !v18 )
          {
            v44 = sub_1BCB278(0LL);
            sub_1BCB120(v44, 0LL);
          }
        }
        if ( v28 >= v24->max_length )
          goto LABEL_60;
        v38 = &v24->obj.klass + v28;
        v38[4] = (Il2CppClass *)v37;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v37, v20, v36);
        goto LABEL_53;
      }
      if ( isInterruption )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, v19);
          byte_4B165D1 = 1;
        }
        v18 = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v18 = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v45 )
          goto LABEL_58;
        v18 = UserServantCollectionMaster__TryGetEntity(
                v45,
                &v50,
                *(_QWORD *)(*(_QWORD *)(v18 + 184) + 64LL),
                v26->fields.svtId,
                0LL);
        if ( (v18 & 1) != 0 )
        {
          v39 = v50;
          v40 = sub_1BCB244(UserServantEntity_TypeInfo);
          UserServantEntity___ctor_42294904((UserServantEntity_o *)v40, v39, 0LL);
          entity = (Il2CppObject *)v40;
          v41 = *p_userSvtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v18 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v48, v41, 0LL);
          v49 = v48;
          if ( !v40 )
            goto LABEL_58;
          v42 = *(_OWORD *)&v49.fields.fakeValue;
          *(_OWORD *)(v40 + 16) = *(_OWORD *)&v49.fields.currentCryptoKey;
          *(_OWORD *)(v40 + 32) = v42;
          if ( !v24 )
            goto LABEL_58;
          goto LABEL_35;
        }
      }
LABEL_53:
      max_length = svts->max_length;
    }
  }
  return v24;
}


bool __fastcall UserEventDeckEntity__IsEquip(UserEventDeckEntity_o *this, int64_t userSvtId, const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0

  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    LOBYTE(deckInfo) = DeckServant__IsEquip(deckInfo, userSvtId, 0LL);
  return (char)deckInfo;
}