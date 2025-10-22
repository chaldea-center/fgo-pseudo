void SupportServantData___ctor(SupportServantData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UserServantLeaderEntity_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_Int64_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Int64_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Int64_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Int64_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x20
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w1
  int32_t v49; // w2
  const MethodInfo *v50; // x3

  if ( (byte_4C53475 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&UserServantLeaderEntity___TypeInfo);
    sub_1C3E564(&StringLiteral_12513/*"SUPPORT_KIND_4"*/);
    sub_1C3E564(&StringLiteral_12516/*"SUPPORT_KIND_7"*/);
    sub_1C3E564(&StringLiteral_12511/*"SUPPORT_KIND_2"*/);
    sub_1C3E564(&StringLiteral_12514/*"SUPPORT_KIND_5"*/);
    sub_1C3E564(&StringLiteral_12517/*"SUPPORT_KIND_8"*/);
    sub_1C3E564(&StringLiteral_12512/*"SUPPORT_KIND_3"*/);
    sub_1C3E564(&StringLiteral_12510/*"SUPPORT_KIND_1"*/);
    sub_1C3E564(&StringLiteral_12509/*"SUPPORT_KIND_0"*/);
    sub_1C3E564(&StringLiteral_12515/*"SUPPORT_KIND_6"*/);
    byte_4C53475 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UserServantLeaderEntity_array *)sub_1C3E60C(
                                                 UserServantLeaderEntity___TypeInfo,
                                                 (unsigned int)v3->static_fields->SupportDeckMemberMax);
  this->fields.userServantLeaderEntityList = v4;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
  v7 = (struct System_Int64_array *)sub_1C3E60C(
                                      long___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.servantIdList = v7;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.servantIdList, (int32_t)v7, v8, v9);
  v10 = (struct System_Int64_array *)sub_1C3E60C(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldServantIdList = v10;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.oldServantIdList, (int32_t)v10, v11, v12);
  v13 = (struct System_Int64_array *)sub_1C3E60C(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.equipIdList = v13;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)v13, v14, v15);
  v16 = (struct System_Int64_array *)sub_1C3E60C(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldEquipIdList = v16;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.oldEquipIdList, (int32_t)v16, v17, v18);
  v19 = sub_1C3E60C(string___TypeInfo, 9);
  if ( !v19 )
    sub_1C3E7C0(0, v20);
  v23 = v19;
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_16;
  v24 = StringLiteral_12509/*"SUPPORT_KIND_0"*/;
  *(_QWORD *)(v19 + 32) = StringLiteral_12509/*"SUPPORT_KIND_0"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v19 + 32), v24, v21, v22);
  if ( *(_DWORD *)(v23 + 24) <= 1u )
    goto LABEL_16;
  v27 = StringLiteral_12510/*"SUPPORT_KIND_1"*/;
  *(_QWORD *)(v23 + 40) = StringLiteral_12510/*"SUPPORT_KIND_1"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v23 + 40), v27, v25, v26);
  if ( *(_DWORD *)(v23 + 24) <= 2u )
    goto LABEL_16;
  v30 = StringLiteral_12511/*"SUPPORT_KIND_2"*/;
  *(_QWORD *)(v23 + 48) = StringLiteral_12511/*"SUPPORT_KIND_2"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v23 + 48), v30, v28, v29);
  if ( *(_DWORD *)(v23 + 24) <= 3u )
    goto LABEL_16;
  v33 = StringLiteral_12512/*"SUPPORT_KIND_3"*/;
  *(_QWORD *)(v23 + 56) = StringLiteral_12512/*"SUPPORT_KIND_3"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v23 + 56), v33, v31, v32);
  if ( *(_DWORD *)(v23 + 24) <= 4u )
    goto LABEL_16;
  v36 = StringLiteral_12513/*"SUPPORT_KIND_4"*/;
  *(_QWORD *)(v23 + 64) = StringLiteral_12513/*"SUPPORT_KIND_4"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v23 + 64), v36, v34, v35);
  if ( *(_DWORD *)(v23 + 24) <= 5u )
    goto LABEL_16;
  v39 = StringLiteral_12514/*"SUPPORT_KIND_5"*/;
  *(_QWORD *)(v23 + 72) = StringLiteral_12514/*"SUPPORT_KIND_5"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v23 + 72), v39, v37, v38);
  if ( *(_DWORD *)(v23 + 24) <= 6u
    || (v42 = StringLiteral_12515/*"SUPPORT_KIND_6"*/,
        *(_QWORD *)(v23 + 80) = StringLiteral_12515/*"SUPPORT_KIND_6"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v23 + 80), v42, v40, v41),
        *(_DWORD *)(v23 + 24) <= 7u)
    || (v45 = StringLiteral_12516/*"SUPPORT_KIND_7"*/,
        *(_QWORD *)(v23 + 88) = StringLiteral_12516/*"SUPPORT_KIND_7"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v23 + 88), v45, v43, v44),
        *(_DWORD *)(v23 + 24) <= 8u) )
  {
LABEL_16:
    sub_1C3E7C8(v19, v20);
  }
  v48 = StringLiteral_12517/*"SUPPORT_KIND_8"*/;
  *(_QWORD *)(v23 + 96) = StringLiteral_12517/*"SUPPORT_KIND_8"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v23 + 96), v48, v46, v47);
  this->fields.className = (struct System_String_array *)v23;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.className, v23, v49, v50);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SupportServantData__CopyData(
        SupportServantData_o *this,
        SupportServantData_o *data,
        bool isInit,
        const MethodInfo *method)
{
  SupportServantData_o *v6; // x20
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UserServantLeaderEntity_array *v11; // x8
  __int64 v12; // x27
  __int64 v13; // x28
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v15; // x29
  unsigned int *v16; // x21
  UserServantLeaderEntity_o *v17; // x24
  UserServantLeaderEntity_o *v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x22
  __int64 v25; // x0
  CGThumbnailListItem_o *p_servantIdList; // x23
  __int64 v27; // x0
  int32_t v28; // w1
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x0
  CGThumbnailListItem_o *p_oldServantIdList; // x23
  __int64 v34; // x0
  int32_t v35; // w1
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x0
  CGThumbnailListItem_o *p_equipIdList; // x23
  __int64 v41; // x0
  int32_t v42; // w1
  Il2CppObject *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x0
  CGThumbnailListItem_o *p_oldEquipIdList; // x23
  __int64 v48; // x0
  int32_t v49; // w1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct EventUpValSetupInfo_o *eventSetupInfo; // x1
  struct EventUpValSetupInfo_o *eventSetupInfo2; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_String_o *deckName_k__BackingField; // x1
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_String_o *oldDeckName_k__BackingField; // x1
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  __int64 v65; // x0
  SupportSelectRootComponent_o *v66; // x0
  bool v67; // w1
  const MethodInfo *v68; // x2
  bool v69; // [xsp+Ch] [xbp-64h]

  v6 = this;
  if ( (byte_4C53487 & 1) == 0 )
  {
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&UserServantLeaderEntity___TypeInfo);
    this = (SupportServantData_o *)sub_1C3E564(&UserServantLeaderEntity_TypeInfo);
    byte_4C53487 = 1;
  }
  if ( !data )
    goto LABEL_14;
  userServantLeaderEntityList = data->fields.userServantLeaderEntityList;
  v69 = isInit;
  if ( !userServantLeaderEntityList )
    goto LABEL_14;
  v8 = sub_1C3E60C(UserServantLeaderEntity___TypeInfo, LODWORD(userServantLeaderEntityList->max_length));
  v6->fields.userServantLeaderEntityList = (struct UserServantLeaderEntity_array *)v8;
  sub_1C3E508((CGThumbnailListItem_o *)&v6->fields, v8, v9, v10);
  v11 = data->fields.userServantLeaderEntityList;
  if ( !v11 )
    goto LABEL_14;
  v12 = 4;
  v13 = 8;
  while ( 1 )
  {
    max_length_low = LODWORD(v11->max_length);
    v15 = v12 - 4;
    if ( v12 - 4 >= (int)max_length_low )
      break;
    if ( v15 >= max_length_low )
      goto LABEL_42;
    v16 = (unsigned int *)v6->fields.userServantLeaderEntityList;
    v17 = (UserServantLeaderEntity_o *)*((_QWORD *)&v11->obj.klass + v12);
    v18 = (UserServantLeaderEntity_o *)sub_1C3E7B0(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_43268688(v18, v17, 0);
    if ( v16 )
    {
      if ( v18 )
      {
        this = (SupportServantData_o *)sub_1C3E6A0(v18, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
        if ( !this )
        {
          v65 = sub_1C3E7E4();
          sub_1C3E68C(v65, 0);
        }
      }
      if ( v15 >= v16[6] )
LABEL_42:
        sub_1C3E7C8(this, data);
      *(_QWORD *)&v16[2 * v12] = v18;
      sub_1C3E508((CGThumbnailListItem_o *)&v16[v13], (int32_t)v18, v19, v20);
      v11 = data->fields.userServantLeaderEntityList;
      ++v12;
      v13 += 2;
      if ( v11 )
        continue;
    }
    goto LABEL_14;
  }
  this = (SupportServantData_o *)data->fields.servantIdList;
  if ( !this )
    goto LABEL_14;
  v21 = System_Array__Clone((System_Array_o *)this, 0);
  if ( v21 )
  {
    v24 = v21;
    v25 = sub_1C3E6A0(v21, long___TypeInfo);
    if ( !v25 )
      goto LABEL_44;
    v6->fields.servantIdList = (struct System_Int64_array *)v25;
    p_servantIdList = (CGThumbnailListItem_o *)&v6->fields.servantIdList;
    v27 = sub_1C3E6A0(v24, long___TypeInfo);
    if ( !v27 )
      goto LABEL_45;
    v28 = v27;
  }
  else
  {
    v28 = 0;
    v6->fields.servantIdList = 0;
    p_servantIdList = (CGThumbnailListItem_o *)&v6->fields.servantIdList;
  }
  sub_1C3E508(p_servantIdList, v28, v22, v23);
  this = (SupportServantData_o *)data->fields.oldServantIdList;
  if ( !this )
    goto LABEL_14;
  v29 = System_Array__Clone((System_Array_o *)this, 0);
  if ( v29 )
  {
    v24 = v29;
    v32 = sub_1C3E6A0(v29, long___TypeInfo);
    if ( !v32 )
      goto LABEL_44;
    v6->fields.oldServantIdList = (struct System_Int64_array *)v32;
    p_oldServantIdList = (CGThumbnailListItem_o *)&v6->fields.oldServantIdList;
    v34 = sub_1C3E6A0(v24, long___TypeInfo);
    if ( !v34 )
      goto LABEL_45;
    v35 = v34;
  }
  else
  {
    v35 = 0;
    v6->fields.oldServantIdList = 0;
    p_oldServantIdList = (CGThumbnailListItem_o *)&v6->fields.oldServantIdList;
  }
  sub_1C3E508(p_oldServantIdList, v35, v30, v31);
  this = (SupportServantData_o *)data->fields.equipIdList;
  if ( !this )
    goto LABEL_14;
  v36 = System_Array__Clone((System_Array_o *)this, 0);
  if ( v36 )
  {
    v24 = v36;
    v39 = sub_1C3E6A0(v36, long___TypeInfo);
    if ( !v39 )
      goto LABEL_44;
    v6->fields.equipIdList = (struct System_Int64_array *)v39;
    p_equipIdList = (CGThumbnailListItem_o *)&v6->fields.equipIdList;
    v41 = sub_1C3E6A0(v24, long___TypeInfo);
    if ( !v41 )
      goto LABEL_45;
    v42 = v41;
  }
  else
  {
    v42 = 0;
    v6->fields.equipIdList = 0;
    p_equipIdList = (CGThumbnailListItem_o *)&v6->fields.equipIdList;
  }
  sub_1C3E508(p_equipIdList, v42, v37, v38);
  this = (SupportServantData_o *)data->fields.oldEquipIdList;
  if ( !this )
LABEL_14:
    sub_1C3E7C0(this, data);
  v43 = System_Array__Clone((System_Array_o *)this, 0);
  if ( v43 )
  {
    v24 = v43;
    v46 = sub_1C3E6A0(v43, long___TypeInfo);
    if ( v46 )
    {
      v6->fields.oldEquipIdList = (struct System_Int64_array *)v46;
      p_oldEquipIdList = (CGThumbnailListItem_o *)&v6->fields.oldEquipIdList;
      v48 = sub_1C3E6A0(v24, long___TypeInfo);
      if ( v48 )
      {
        v49 = v48;
        goto LABEL_39;
      }
LABEL_45:
      sub_1C3EA80(v24);
      SupportSelectRootComponent__EndRemoveAll(v66, v67, v68);
      return;
    }
LABEL_44:
    sub_1C3EA80(v24);
    goto LABEL_45;
  }
  v49 = 0;
  v6->fields.oldEquipIdList = 0;
  p_oldEquipIdList = (CGThumbnailListItem_o *)&v6->fields.oldEquipIdList;
LABEL_39:
  sub_1C3E508(p_oldEquipIdList, v49, v44, v45);
  if ( v69 )
  {
    v6->fields.isFriendInfo = data->fields.isFriendInfo;
    v6->fields.kind = data->fields.kind;
    v6->fields.isSelectServant = data->fields.isSelectServant;
    eventSetupInfo = data->fields.eventSetupInfo;
    v6->fields.eventSetupInfo = eventSetupInfo;
    sub_1C3E508((CGThumbnailListItem_o *)&v6->fields.eventSetupInfo, (int32_t)eventSetupInfo, v50, v51);
    eventSetupInfo2 = data->fields.eventSetupInfo2;
    v6->fields.eventSetupInfo2 = eventSetupInfo2;
    sub_1C3E508((CGThumbnailListItem_o *)&v6->fields.eventSetupInfo2, (int32_t)eventSetupInfo2, v54, v55);
    questRestrictionInfo = data->fields.questRestrictionInfo;
    v6->fields.questRestrictionInfo = questRestrictionInfo;
    sub_1C3E508((CGThumbnailListItem_o *)&v6->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v57, v58);
    v6->fields.pushUserServantId = data->fields.pushUserServantId;
    v6->fields._deckId_k__BackingField = data->fields._deckId_k__BackingField;
    deckName_k__BackingField = data->fields._deckName_k__BackingField;
    v6->fields._deckName_k__BackingField = deckName_k__BackingField;
    sub_1C3E508(
      (CGThumbnailListItem_o *)&v6->fields._deckName_k__BackingField,
      (int32_t)deckName_k__BackingField,
      v60,
      v61);
    oldDeckName_k__BackingField = data->fields._oldDeckName_k__BackingField;
    v6->fields._oldDeckName_k__BackingField = oldDeckName_k__BackingField;
    sub_1C3E508(
      (CGThumbnailListItem_o *)&v6->fields._oldDeckName_k__BackingField,
      (int32_t)oldDeckName_k__BackingField,
      v63,
      v64);
  }
}


System_Int64_array *SupportServantData__GetEquipList(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.equipIdList;
}


// local variable allocation has failed, the output may be wrong!
SupportServantData_FollowerData_o *SupportServantData__GetFollowerDataIfUpdated(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  SupportServantData_o *v4; // x20
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9
  __int64 v9; // x21
  struct System_Int64_array *v10; // x8
  struct System_Int64_array *v11; // x8

  v4 = this;
  if ( (byte_4C53480 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_1C3E564(&SupportServantData_FollowerData_TypeInfo);
    byte_4C53480 = 1;
  }
  servantIdList = v4->fields.servantIdList;
  if ( !servantIdList )
    goto LABEL_21;
  if ( LODWORD(servantIdList->max_length) <= classPos )
    goto LABEL_22;
  oldServantIdList = v4->fields.oldServantIdList;
  if ( !oldServantIdList )
    goto LABEL_21;
  if ( LODWORD(oldServantIdList->max_length) <= classPos )
    goto LABEL_22;
  if ( servantIdList->m_Items[classPos] != oldServantIdList->m_Items[classPos] )
    goto LABEL_14;
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_21;
  if ( LODWORD(equipIdList->max_length) <= classPos )
    goto LABEL_22;
  oldEquipIdList = v4->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    goto LABEL_21;
  if ( LODWORD(oldEquipIdList->max_length) <= classPos )
    goto LABEL_22;
  if ( equipIdList->m_Items[classPos] != oldEquipIdList->m_Items[classPos] )
  {
LABEL_14:
    v9 = sub_1C3E7B0(SupportServantData_FollowerData_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0);
    if ( v9 )
    {
      *(_DWORD *)(v9 + 16) = v4->fields._deckId_k__BackingField;
      *(_DWORD *)(v9 + 20) = classPos;
      v10 = v4->fields.servantIdList;
      if ( v10 )
      {
        if ( LODWORD(v10->max_length) <= classPos )
          goto LABEL_22;
        *(_QWORD *)(v9 + 24) = v10->m_Items[classPos];
        v11 = v4->fields.equipIdList;
        if ( v11 )
        {
          if ( LODWORD(v11->max_length) > classPos )
          {
            *(_QWORD *)(v9 + 32) = v11->m_Items[classPos];
            return (SupportServantData_FollowerData_o *)v9;
          }
LABEL_22:
          sub_1C3E7C8(this, *(_QWORD *)&classPos);
        }
      }
    }
LABEL_21:
    sub_1C3E7C0(this, *(_QWORD *)&classPos);
  }
  return 0;
}


UserServantLeaderEntity_array *SupportServantData__GetUserServantLeaderList(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantLeaderEntityList;
}


// local variable allocation has failed, the output may be wrong!
void SupportServantData__Init(
        SupportServantData_o *this,
        int32_t deckId,
        EventUpValSetupInfo_o *eventUpSetupInfo,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 i; // x26
  unsigned __int64 v9; // x27
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldServantIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x8
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v15; // x21
  struct UserServantLeaderEntity_array *SupportDeck; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x22
  int max_length; // w8
  unsigned int v23; // w25
  struct System_Int64_array *v24; // x8
  __int64 v25; // x26
  struct System_Int64_array *v26; // x9
  int64_t v27; // x10
  struct System_Int64_array *v28; // x27
  struct System_Int64_array *v29; // x28
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_String_o *DeckName; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_String_o *DefaultDeckName; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_String_o *deckName_k__BackingField; // x1

  if ( (byte_4C53476 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserSupportDeckMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C53476 = 1;
  }
  Instance = (int64_t)BalanceConfig_TypeInfo;
  for ( i = 4; ; ++i )
  {
    v9 = i - 4;
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v9 >= *(int *)(*(_QWORD *)(Instance + 184) + 180LL) )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_40;
    if ( v9 >= LODWORD(servantIdList->max_length) )
      goto LABEL_41;
    *((_QWORD *)&servantIdList->obj.klass + i) = 0;
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_40;
    if ( v9 >= LODWORD(equipIdList->max_length) )
      goto LABEL_41;
    *((_QWORD *)&equipIdList->obj.klass + i) = 0;
    oldServantIdList = this->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_40;
    if ( v9 >= LODWORD(oldServantIdList->max_length) )
      goto LABEL_41;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = 0;
    oldEquipIdList = this->fields.oldEquipIdList;
    if ( !oldEquipIdList )
      goto LABEL_40;
    if ( v9 >= LODWORD(oldEquipIdList->max_length) )
      goto LABEL_41;
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = 0;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields._deckId_k__BackingField = deckId;
  v15 = SelfUserGame;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_40;
  SupportDeck = UserServantLeaderMaster__getSupportDeck(
                  (UserServantLeaderMaster_o *)Instance,
                  this->fields._deckId_k__BackingField,
                  0);
  this->fields.userServantLeaderEntityList = SupportDeck;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)SupportDeck, v17, v18);
  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_40;
  max_length = userServantLeaderEntityList->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0;
    while ( v23 < max_length )
    {
      Instance = (int64_t)userServantLeaderEntityList->m_Items[v23];
      if ( !Instance )
        goto LABEL_40;
      if ( *(_DWORD *)(Instance + 48) == this->fields._deckId_k__BackingField )
      {
        v24 = this->fields.oldServantIdList;
        if ( !v24 )
          goto LABEL_40;
        v25 = *(int *)(Instance + 52);
        if ( (unsigned int)v25 >= LODWORD(v24->max_length) )
          break;
        v26 = this->fields.servantIdList;
        v27 = *(_QWORD *)(Instance + 56);
        v24->m_Items[v25] = v27;
        if ( !v26 )
          goto LABEL_40;
        if ( (unsigned int)v25 >= LODWORD(v26->max_length) )
          break;
        v26->m_Items[v25] = v27;
        v28 = this->fields.equipIdList;
        v29 = this->fields.oldEquipIdList;
        Instance = UserServantLeaderEntity__getEquipUserSvtId((UserServantLeaderEntity_o *)Instance, 0);
        if ( !v29 )
          goto LABEL_40;
        if ( (unsigned int)v25 >= LODWORD(v29->max_length) )
          break;
        v29->m_Items[v25] = Instance;
        if ( !v28 )
          goto LABEL_40;
        if ( (unsigned int)v25 >= LODWORD(v28->max_length) )
          break;
        v28->m_Items[v25] = Instance;
      }
      max_length = userServantLeaderEntityList->max_length;
      if ( (int)++v23 >= max_length )
        goto LABEL_34;
    }
LABEL_41:
    sub_1C3E7C8(Instance, *(_QWORD *)&deckId);
  }
LABEL_34:
  this->fields.isFriendInfo = 0;
  this->fields.isSelectServant = 0;
  this->fields.kind = 1;
  this->fields.eventSetupInfo2 = eventUpSetupInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventSetupInfo2, (int32_t)eventUpSetupInfo, v19, v20);
  this->fields.eventSetupInfo = eventUpSetupInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventSetupInfo, (int32_t)eventUpSetupInfo, v30, v31);
  this->fields.questRestrictionInfo = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v32, v33);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserSupportDeckMaster___);
  if ( !Instance )
    goto LABEL_40;
  DeckName = UserSupportDeckMaster__getDeckName(
               (UserSupportDeckMaster_o *)Instance,
               this->fields._deckId_k__BackingField,
               0);
  this->fields._deckName_k__BackingField = DeckName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._deckName_k__BackingField, (int32_t)DeckName, v35, v36);
  if ( System_String__IsNullOrEmpty(this->fields._deckName_k__BackingField, 0) )
  {
    DefaultDeckName = SupportServantData__getDefaultDeckName(this, v37);
    this->fields._deckName_k__BackingField = DefaultDeckName;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields._deckName_k__BackingField, (int32_t)DefaultDeckName, v41, v42);
  }
  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  this->fields._oldDeckName_k__BackingField = deckName_k__BackingField;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._oldDeckName_k__BackingField,
    (int32_t)deckName_k__BackingField,
    v38,
    v39);
  if ( !v15 )
LABEL_40:
    sub_1C3E7C0(Instance, *(_QWORD *)&deckId);
  this->fields.pushUserServantId = v15->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void SupportServantData__Init_35795352(
        SupportServantData_o *this,
        OtherUserGameEntity_o *otherData,
        int32_t friendKind,
        bool isSelectServant,
        EventUpValSetupInfo_o *eventSetupInfo,
        int32_t displayType,
        int32_t deckId,
        const MethodInfo *method)
{
  unsigned __int64 v13; // x25
  __int64 i; // x27
  BalanceConfig_c *v15; // x0
  unsigned int *userServantLeaderEntityList; // x24
  UserServantLeaderEntity_o *v17; // x26
  __int64 ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct UserServantLeaderEntity_array *v22; // x8
  struct System_Int64_array *oldServantIdList; // x24
  struct System_Int64_array *servantIdList; // x26
  struct System_Int64_array *v25; // x8
  struct UserServantLeaderEntity_array *v26; // x8
  UserServantLeaderEntity_o *v27; // x26
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Int64_array *oldEquipIdList; // x24
  struct System_Int64_array *equipIdList; // x26
  struct System_Int64_array *v32; // x8
  Il2CppClass **v33; // x8
  int32_t v34; // w8
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x0
  bool v41; // [xsp+Ch] [xbp-64h]

  v41 = isSelectServant;
  if ( (byte_4C53478 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&UserServantLeaderEntity_TypeInfo);
    byte_4C53478 = 1;
  }
  v13 = 0;
  for ( i = 8; ; i += 2 )
  {
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v13 >= v15->static_fields->SupportDeckMemberMax )
      break;
    userServantLeaderEntityList = (unsigned int *)this->fields.userServantLeaderEntityList;
    v17 = (UserServantLeaderEntity_o *)sub_1C3E7B0(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v17, 0);
    if ( !userServantLeaderEntityList )
      goto LABEL_46;
    if ( v17 )
    {
      ServantLeaderInfo = sub_1C3E6A0(v17, *(_QWORD *)(*(_QWORD *)userServantLeaderEntityList + 64LL));
      if ( !ServantLeaderInfo )
      {
        v39 = sub_1C3E7E4();
        sub_1C3E68C(v39, 0);
      }
    }
    if ( v13 >= userServantLeaderEntityList[6] )
      goto LABEL_47;
    *(_QWORD *)&userServantLeaderEntityList[2 * v13 + 8] = v17;
    sub_1C3E508((CGThumbnailListItem_o *)&userServantLeaderEntityList[i], (int32_t)v17, v20, v21);
    if ( !otherData )
      goto LABEL_46;
    ServantLeaderInfo = (__int64)OtherUserGameEntity__getServantLeaderInfo(otherData, v13, 0, displayType, deckId, 0, 0);
    if ( ServantLeaderInfo )
    {
      v22 = this->fields.userServantLeaderEntityList;
      if ( !v22 )
        goto LABEL_46;
      if ( v13 >= LODWORD(v22->max_length) )
        goto LABEL_47;
      v19 = (ServantLeaderInfo_o *)ServantLeaderInfo;
      ServantLeaderInfo = (__int64)v22->m_Items[v13];
      if ( !ServantLeaderInfo )
        goto LABEL_46;
      UserServantLeaderEntity__setUserServantEntity_43269372((UserServantLeaderEntity_o *)ServantLeaderInfo, v19, 0);
      servantIdList = this->fields.servantIdList;
      oldServantIdList = this->fields.oldServantIdList;
      ServantLeaderInfo = OtherUserGameEntity__getUserSvtId(otherData, v13, displayType, 0, 0);
      if ( !oldServantIdList )
        goto LABEL_46;
      if ( v13 >= LODWORD(oldServantIdList->max_length) )
        goto LABEL_47;
      oldServantIdList->m_Items[v13] = ServantLeaderInfo;
      if ( !servantIdList )
        goto LABEL_46;
      if ( v13 >= LODWORD(servantIdList->max_length) )
        goto LABEL_47;
    }
    else
    {
      v25 = this->fields.oldServantIdList;
      if ( !v25 )
        goto LABEL_46;
      if ( v13 >= LODWORD(v25->max_length) )
        goto LABEL_47;
      servantIdList = this->fields.servantIdList;
      v25->m_Items[v13] = 0;
      if ( !servantIdList )
        goto LABEL_46;
      if ( v13 >= LODWORD(servantIdList->max_length) )
        goto LABEL_47;
      ServantLeaderInfo = 0;
    }
    servantIdList->m_Items[v13] = ServantLeaderInfo;
    ServantLeaderInfo = OtherUserGameEntity__getEquipSvtId(otherData, v13, displayType, deckId, 0, 0);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v26 = this->fields.userServantLeaderEntityList;
      if ( !v26 )
        goto LABEL_46;
      if ( v13 >= LODWORD(v26->max_length) )
        goto LABEL_47;
      v27 = v26->m_Items[v13];
      ServantLeaderInfo = (__int64)OtherUserGameEntity__getEquipInfo(otherData, v13, displayType, deckId, 0, 0, 0);
      if ( !v27 )
        goto LABEL_46;
      v27->fields.equipTarget1 = (struct EquipTargetInfo_o *)ServantLeaderInfo;
      sub_1C3E508((CGThumbnailListItem_o *)&v27->fields.equipTarget1, ServantLeaderInfo, v28, v29);
      equipIdList = this->fields.equipIdList;
      oldEquipIdList = this->fields.oldEquipIdList;
      ServantLeaderInfo = OtherUserGameEntity__getEquipUserSvtId(otherData, v13, displayType, deckId, 0, 0);
      if ( !oldEquipIdList )
        goto LABEL_46;
      if ( v13 >= LODWORD(oldEquipIdList->max_length) )
        goto LABEL_47;
      oldEquipIdList->m_Items[v13] = ServantLeaderInfo;
      if ( !equipIdList )
        goto LABEL_46;
      if ( v13 >= LODWORD(equipIdList->max_length) )
        goto LABEL_47;
    }
    else
    {
      v32 = this->fields.oldEquipIdList;
      if ( !v32 )
        goto LABEL_46;
      if ( v13 >= LODWORD(v32->max_length) )
        goto LABEL_47;
      equipIdList = this->fields.equipIdList;
      v32->m_Items[v13] = 0;
      if ( !equipIdList )
        goto LABEL_46;
      if ( v13 >= LODWORD(equipIdList->max_length) )
LABEL_47:
        sub_1C3E7C8(ServantLeaderInfo, v19);
      ServantLeaderInfo = 0;
    }
    v33 = &equipIdList->obj.klass + v13++;
    v33[4] = (Il2CppClass *)ServantLeaderInfo;
  }
  this->fields.isFriendInfo = 1;
  if ( friendKind == 3 )
    v34 = 4;
  else
    v34 = 5;
  this->fields.isSelectServant = v41;
  this->fields.kind = v34;
  this->fields.eventSetupInfo2 = eventSetupInfo;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.eventSetupInfo2,
    (int32_t)eventSetupInfo,
    friendKind,
    (const MethodInfo *)isSelectServant);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventSetupInfo, (int32_t)eventSetupInfo, v35, v36);
  this->fields.questRestrictionInfo = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v37, v38);
  if ( !otherData )
LABEL_46:
    sub_1C3E7C0(ServantLeaderInfo, v19);
  this->fields.pushUserServantId = otherData->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void SupportServantData__Init_35797460(
        SupportServantData_o *this,
        FollowerInfo_o *followerInfo,
        int32_t friendKind,
        bool isSelectServant,
        EventUpValSetupInfo_o *eventSetupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t deckId,
        const MethodInfo *method)
{
  int32_t ReturnTypeByQuestId; // w25
  unsigned __int64 v14; // x26
  __int64 i; // x22
  BalanceConfig_c *v16; // x0
  unsigned int *userServantLeaderEntityList; // x24
  UserServantLeaderEntity_o *v18; // x27
  __int64 ServantLeaderInfo; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t IndexForSupport; // w27
  ServantLeaderInfo_o *v24; // x28
  __int64 v25; // x24
  __int64 v26; // x29
  struct System_Int64_array *servantIdList; // x24
  struct System_Int64_array *oldServantIdList; // x29
  struct UserServantLeaderEntity_array *v29; // x8
  struct System_Int64_array *v30; // x9
  struct System_Int64_array *v31; // x8
  struct UserServantLeaderEntity_array *v32; // x8
  UserServantLeaderEntity_o *v33; // x28
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Int64_array *equipIdList; // x24
  struct System_Int64_array *oldEquipIdList; // x28
  struct System_Int64_array *v38; // x8
  Il2CppClass **v39; // x8
  int32_t v40; // w8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x0
  bool v46; // [xsp+8h] [xbp-78h]
  struct QuestRestrictionInfo_o *v49; // [xsp+18h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4C53479 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&UserServantLeaderEntity_TypeInfo);
    byte_4C53479 = 1;
  }
  v46 = isSelectServant;
  v49 = questRestrictionInfo;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
  else
    ReturnTypeByQuestId = 0;
  v14 = 0;
  for ( i = 8; ; i += 2 )
  {
    v16 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v14 >= v16->static_fields->SupportDeckMemberMax )
      break;
    userServantLeaderEntityList = (unsigned int *)this->fields.userServantLeaderEntityList;
    v18 = (UserServantLeaderEntity_o *)sub_1C3E7B0(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v18, 0);
    if ( !userServantLeaderEntityList )
      goto LABEL_53;
    if ( v18 )
    {
      ServantLeaderInfo = sub_1C3E6A0(v18, *(_QWORD *)(*(_QWORD *)userServantLeaderEntityList + 64LL));
      if ( !ServantLeaderInfo )
      {
        v45 = sub_1C3E7E4();
        sub_1C3E68C(v45, 0);
      }
    }
    if ( v14 >= userServantLeaderEntityList[6] )
      goto LABEL_54;
    *(_QWORD *)&userServantLeaderEntityList[2 * v14 + 8] = v18;
    sub_1C3E508((CGThumbnailListItem_o *)&userServantLeaderEntityList[i], (int32_t)v18, v21, v22);
    if ( !followerInfo )
      goto LABEL_53;
    IndexForSupport = FollowerInfo__getIndexForSupport(followerInfo, v14, ReturnTypeByQuestId, deckId, 0);
    ServantLeaderInfo = (__int64)FollowerInfo__getServantLeaderInfo(
                                   followerInfo,
                                   IndexForSupport,
                                   ReturnTypeByQuestId,
                                   0);
    if ( ServantLeaderInfo )
    {
      v24 = (ServantLeaderInfo_o *)ServantLeaderInfo;
      v25 = *(_QWORD *)(ServantLeaderInfo + 48);
      v26 = *(_QWORD *)(ServantLeaderInfo + 56);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v50.fields.currentCryptoKey = v25;
      *(_QWORD *)&v50.fields.fakeValue = v26;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v50, 0) )
      {
        servantIdList = this->fields.servantIdList;
        oldServantIdList = this->fields.oldServantIdList;
        ServantLeaderInfo = FollowerInfo__getUserSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0);
        if ( !oldServantIdList )
          goto LABEL_53;
        if ( v14 >= LODWORD(oldServantIdList->max_length) )
          goto LABEL_54;
        oldServantIdList->m_Items[v14] = ServantLeaderInfo;
        if ( !servantIdList )
          goto LABEL_53;
        if ( v14 >= LODWORD(servantIdList->max_length) )
          goto LABEL_54;
        servantIdList->m_Items[v14] = ServantLeaderInfo;
        v29 = this->fields.userServantLeaderEntityList;
        if ( !v29 )
          goto LABEL_53;
        if ( v14 >= LODWORD(v29->max_length) )
          goto LABEL_54;
        ServantLeaderInfo = (__int64)v29->m_Items[v14];
        if ( !ServantLeaderInfo )
          goto LABEL_53;
        UserServantLeaderEntity__setUserServantEntity_43269372((UserServantLeaderEntity_o *)ServantLeaderInfo, v24, 0);
        goto LABEL_33;
      }
      ServantLeaderInfo__SetEquipImagePartsGroupIdxs(v24, 0);
    }
    v30 = this->fields.oldServantIdList;
    if ( !v30 )
      goto LABEL_53;
    if ( v14 >= LODWORD(v30->max_length) )
      goto LABEL_54;
    v31 = this->fields.servantIdList;
    v30->m_Items[v14] = 0;
    if ( !v31 )
      goto LABEL_53;
    if ( v14 >= LODWORD(v31->max_length) )
      goto LABEL_54;
    v31->m_Items[v14] = 0;
LABEL_33:
    ServantLeaderInfo = FollowerInfo__getEquipSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v32 = this->fields.userServantLeaderEntityList;
      if ( !v32 )
        goto LABEL_53;
      if ( v14 >= LODWORD(v32->max_length) )
        goto LABEL_54;
      v33 = v32->m_Items[v14];
      ServantLeaderInfo = (__int64)FollowerInfo__getEquipTarget1(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0);
      if ( !v33 )
        goto LABEL_53;
      v33->fields.equipTarget1 = (struct EquipTargetInfo_o *)ServantLeaderInfo;
      sub_1C3E508((CGThumbnailListItem_o *)&v33->fields.equipTarget1, ServantLeaderInfo, v34, v35);
      equipIdList = this->fields.equipIdList;
      oldEquipIdList = this->fields.oldEquipIdList;
      ServantLeaderInfo = FollowerInfo__getEquipUserSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0);
      if ( !oldEquipIdList )
        goto LABEL_53;
      if ( v14 >= LODWORD(oldEquipIdList->max_length) )
        goto LABEL_54;
      oldEquipIdList->m_Items[v14] = ServantLeaderInfo;
      if ( !equipIdList )
        goto LABEL_53;
      if ( v14 >= LODWORD(equipIdList->max_length) )
        goto LABEL_54;
    }
    else
    {
      v38 = this->fields.oldEquipIdList;
      if ( !v38 )
        goto LABEL_53;
      if ( v14 >= LODWORD(v38->max_length) )
        goto LABEL_54;
      equipIdList = this->fields.equipIdList;
      v38->m_Items[v14] = 0;
      if ( !equipIdList )
        goto LABEL_53;
      if ( v14 >= LODWORD(equipIdList->max_length) )
LABEL_54:
        sub_1C3E7C8(ServantLeaderInfo, v20);
      ServantLeaderInfo = 0;
    }
    v39 = &equipIdList->obj.klass + v14++;
    v39[4] = (Il2CppClass *)ServantLeaderInfo;
  }
  if ( friendKind == 3 )
    v40 = 4;
  else
    v40 = 5;
  this->fields.isSelectServant = v46;
  this->fields.isFriendInfo = 1;
  this->fields.kind = v40;
  this->fields.eventSetupInfo2 = eventSetupInfo;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.eventSetupInfo2,
    (int32_t)eventSetupInfo,
    friendKind,
    (const MethodInfo *)isSelectServant);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventSetupInfo, (int32_t)eventSetupInfo, v41, v42);
  this->fields.questRestrictionInfo = v49;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)v49, v43, v44);
  if ( !followerInfo )
LABEL_53:
    sub_1C3E7C0(ServantLeaderInfo, v20);
  this->fields.pushUserServantId = followerInfo->fields.pushUserSvtId;
}


bool SupportServantData__IsChangeDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  return System_String__op_Inequality(
           this->fields._oldDeckName_k__BackingField,
           this->fields._deckName_k__BackingField,
           0);
}


bool SupportServantData__IsDefaultDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  System_String_o *deckName_k__BackingField; // x19
  System_String_o *DefaultDeckName; // x1

  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  DefaultDeckName = SupportServantData__getDefaultDeckName(this, method);
  return System_String__op_Equality(deckName_k__BackingField, DefaultDeckName, 0);
}


bool SupportServantData__IsEmpty(SupportServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return !SupportServantData__getServantSum(this, method) && SupportServantData__getEquipSum(this, v3) == 0;
}


void SupportServantData__ResetDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  struct System_String_o *DefaultDeckName; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  DefaultDeckName = SupportServantData__getDefaultDeckName(this, method);
  this->fields._deckName_k__BackingField = DefaultDeckName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._deckName_k__BackingField, (int32_t)DefaultDeckName, v4, v5);
}


void SupportServantData__ResetOld(SupportServantData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_String_o *deckName_k__BackingField; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  __int64 i; // x21
  unsigned __int64 v9; // x22
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9

  if ( (byte_4C53485 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C53485 = 1;
  }
  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  this->fields._oldDeckName_k__BackingField = deckName_k__BackingField;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._oldDeckName_k__BackingField,
    (int32_t)deckName_k__BackingField,
    v2,
    v3);
  v7 = BalanceConfig_TypeInfo;
  for ( i = 4; ; ++i )
  {
    v9 = i - 4;
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v9 >= v7->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_17;
    if ( v9 >= LODWORD(servantIdList->max_length) )
      goto LABEL_18;
    oldServantIdList = this->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_17;
    if ( v9 >= LODWORD(oldServantIdList->max_length) )
      goto LABEL_18;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = *((_QWORD *)&servantIdList->obj.klass + i);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_17;
    if ( v9 >= LODWORD(equipIdList->max_length) )
      goto LABEL_18;
    oldEquipIdList = this->fields.oldEquipIdList;
    if ( !oldEquipIdList )
LABEL_17:
      sub_1C3E7C0(v7, v6);
    if ( v9 >= LODWORD(oldEquipIdList->max_length) )
LABEL_18:
      sub_1C3E7C8(v7, v6);
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = *((_QWORD *)&equipIdList->obj.klass + i);
  }
}


void SupportServantData__SetOld(SupportServantData_o *this, SupportServantData_o *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SupportServantData_o *v5; // x20
  struct System_String_o *oldDeckName_k__BackingField; // x1
  __int64 i; // x22
  unsigned __int64 v8; // x23
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9

  v5 = this;
  if ( (byte_4C53486 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C53486 = 1;
  }
  if ( !data )
LABEL_18:
    sub_1C3E7C0(this, data);
  oldDeckName_k__BackingField = data->fields._oldDeckName_k__BackingField;
  v5->fields._oldDeckName_k__BackingField = oldDeckName_k__BackingField;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&v5->fields._oldDeckName_k__BackingField,
    (int32_t)oldDeckName_k__BackingField,
    (int32_t)method,
    v3);
  this = (SupportServantData_o *)BalanceConfig_TypeInfo;
  for ( i = 4; ; ++i )
  {
    v8 = i - 4;
    if ( !LODWORD(this[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v8 >= SHIDWORD(this[1].fields.oldEquipIdList->m_Items[18]) )
      break;
    servantIdList = data->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_18;
    if ( v8 >= LODWORD(servantIdList->max_length) )
      goto LABEL_19;
    oldServantIdList = v5->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_18;
    if ( v8 >= LODWORD(oldServantIdList->max_length) )
      goto LABEL_19;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = *((_QWORD *)&servantIdList->obj.klass + i);
    equipIdList = data->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_18;
    if ( v8 >= LODWORD(equipIdList->max_length) )
      goto LABEL_19;
    oldEquipIdList = v5->fields.oldEquipIdList;
    if ( !oldEquipIdList )
      goto LABEL_18;
    if ( v8 >= LODWORD(oldEquipIdList->max_length) )
LABEL_19:
      sub_1C3E7C8(this, data);
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = *((_QWORD *)&equipIdList->obj.klass + i);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *SupportServantData__getClassName(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  SupportServantData_o *v4; // x20
  struct System_String_array *className; // x8
  System_String_o *v6; // x19

  v4 = this;
  if ( (byte_4C53484 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_1C3E564(&LocalizationManager_TypeInfo);
    byte_4C53484 = 1;
  }
  className = v4->fields.className;
  if ( !className )
    sub_1C3E7C0(this, *(_QWORD *)&classPos);
  if ( LODWORD(className->max_length) <= classPos )
    sub_1C3E7C8(this, *(_QWORD *)&classPos);
  v6 = className->m_Items[classPos];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v6, 0);
}


System_String_o *SupportServantData__getDefaultDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  int32_t deckId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C53477 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_12565/*"SUPPORT_SELECT_NAME_BASE"*/);
    byte_4C53477 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_12565/*"SUPPORT_SELECT_NAME_BASE"*/, 0);
  deckId_k__BackingField = this->fields._deckId_k__BackingField;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deckId_k__BackingField, v4, v5, v6, v7, v8, v9);
  return System_String__Format(v3, v10, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t SupportServantData__getEquip(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x8

  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    sub_1C3E7C0(this, *(_QWORD *)&classPos);
  if ( LODWORD(equipIdList->max_length) <= classPos )
    sub_1C3E7C8(this, *(_QWORD *)&classPos);
  return equipIdList->m_Items[classPos];
}


int32_t SupportServantData__getEquipSum(SupportServantData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  unsigned __int64 v4; // x22
  int32_t v5; // w20
  struct System_Int64_array *equipIdList; // x8

  if ( (byte_4C5347E & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C5347E = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v4 >= v3->static_fields->SupportDeckMemberMax )
      break;
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      sub_1C3E7C0(v3, method);
    if ( v4 >= LODWORD(equipIdList->max_length) )
      sub_1C3E7C8(v3, method);
    if ( equipIdList->m_Items[v4++] )
      ++v5;
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
int64_t SupportServantData__getMember(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v4; // x8

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    sub_1C3E7C0(this, *(_QWORD *)&classPos);
  if ( LODWORD(userServantLeaderEntityList->max_length) <= classPos )
    sub_1C3E7C8(this, *(_QWORD *)&classPos);
  v4 = userServantLeaderEntityList->m_Items[classPos];
  if ( v4 )
    return v4->fields.userSvtId;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
int64_t SupportServantData__getOldEquip(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct System_Int64_array *oldEquipIdList; // x8

  oldEquipIdList = this->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    sub_1C3E7C0(this, *(_QWORD *)&classPos);
  if ( LODWORD(oldEquipIdList->max_length) <= classPos )
    sub_1C3E7C8(this, *(_QWORD *)&classPos);
  return oldEquipIdList->m_Items[classPos];
}


// local variable allocation has failed, the output may be wrong!
int64_t SupportServantData__getOldServant(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct System_Int64_array *oldServantIdList; // x8

  oldServantIdList = this->fields.oldServantIdList;
  if ( !oldServantIdList )
    sub_1C3E7C0(this, *(_QWORD *)&classPos);
  if ( LODWORD(oldServantIdList->max_length) <= classPos )
    sub_1C3E7C8(this, *(_QWORD *)&classPos);
  return oldServantIdList->m_Items[classPos];
}


// local variable allocation has failed, the output may be wrong!
int64_t SupportServantData__getServant(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct System_Int64_array *servantIdList; // x8

  servantIdList = this->fields.servantIdList;
  if ( !servantIdList )
    sub_1C3E7C0(this, *(_QWORD *)&classPos);
  if ( LODWORD(servantIdList->max_length) <= classPos )
    sub_1C3E7C8(this, *(_QWORD *)&classPos);
  return servantIdList->m_Items[classPos];
}


int32_t SupportServantData__getServantSum(SupportServantData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  unsigned __int64 v4; // x22
  int32_t v5; // w20
  struct System_Int64_array *servantIdList; // x8

  if ( (byte_4C5347D & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C5347D = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v4 >= v3->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_1C3E7C0(v3, method);
    if ( v4 >= LODWORD(servantIdList->max_length) )
      sub_1C3E7C8(v3, method);
    if ( servantIdList->m_Items[v4++] )
      ++v5;
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
UserServantLeaderEntity_o *SupportServantData__getUserServantLeaderEntity(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    sub_1C3E7C0(this, *(_QWORD *)&classPos);
  if ( LODWORD(userServantLeaderEntityList->max_length) <= classPos )
    sub_1C3E7C8(this, *(_QWORD *)&classPos);
  return userServantLeaderEntityList->m_Items[classPos];
}


EventUpValSetupInfo_o *SupportServantData__get_EventSetupInfo(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.eventSetupInfo;
}


EventUpValSetupInfo_o *SupportServantData__get_EventSetupInfo2(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.eventSetupInfo2;
}


bool SupportServantData__get_IsFriendInfo(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.isFriendInfo;
}


bool SupportServantData__get_IsNoServant(SupportServantData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t v4; // w9
  int32_t v5; // w21
  int32_t SupportDeckMemberMax; // w8
  struct System_Int64_array *servantIdList; // x9
  bool v8; // cc

  if ( (byte_4C53483 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C53483 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  v4 = 0;
  do
  {
    v5 = v4;
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BalanceConfig_TypeInfo;
    }
    SupportDeckMemberMax = v3->static_fields->SupportDeckMemberMax;
    if ( v5 >= SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_1C3E7C0(v3, method);
    if ( (unsigned int)v5 >= LODWORD(servantIdList->max_length) )
      sub_1C3E7C8(v3, method);
    v8 = servantIdList->m_Items[v5] <= 0;
    v4 = v5 + 1;
  }
  while ( v8 );
  return v5 >= SupportDeckMemberMax;
}


bool SupportServantData__get_IsSelectServant(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.isSelectServant;
}


int32_t SupportServantData__get_Kind(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.kind;
}


int64_t SupportServantData__get_PushUserServantId(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.pushUserServantId;
}


QuestRestrictionInfo_o *SupportServantData__get_QuestRestriction(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.questRestrictionInfo;
}


int32_t SupportServantData__get_deckId(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields._deckId_k__BackingField;
}


System_String_o *SupportServantData__get_deckName(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields._deckName_k__BackingField;
}


System_String_o *SupportServantData__get_oldDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields._oldDeckName_k__BackingField;
}


bool SupportServantData__isUseServant(SupportServantData_o *this, int64_t userSvtId, const MethodInfo *method)
{
  BalanceConfig_c *v5; // x0
  int32_t v6; // w9
  int32_t v7; // w22
  int32_t SupportDeckMemberMax; // w8
  struct System_Int64_array *servantIdList; // x9
  bool v10; // zf

  if ( (byte_4C5347F & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C5347F = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  v6 = 0;
  do
  {
    v7 = v6;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BalanceConfig_TypeInfo;
    }
    SupportDeckMemberMax = v5->static_fields->SupportDeckMemberMax;
    if ( v7 >= SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_1C3E7C0(v5, userSvtId);
    if ( (unsigned int)v7 >= LODWORD(servantIdList->max_length) )
      sub_1C3E7C8(v5, userSvtId);
    v10 = servantIdList->m_Items[v7] == userSvtId;
    v6 = v7 + 1;
  }
  while ( !v10 );
  return v7 < SupportDeckMemberMax;
}


// local variable allocation has failed, the output may be wrong!
void SupportServantData__removeEquipData(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  int32_t v3; // w19
  SupportServantData_o *v4; // x20
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v6; // x8
  struct EquipTargetInfo_o *equipTarget1; // x22
  __int128 v8; // q1
  struct UserServantLeaderEntity_array *v9; // x8
  UserServantLeaderEntity_o *v10; // x8
  struct EquipTargetInfo_o *v11; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // kr00_16
  struct System_Int64_array *equipIdList; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14[2]; // [xsp+0h] [xbp-70h] BYREF

  v3 = classPos;
  v4 = this;
  if ( (byte_4C5347C & 1) == 0 )
  {
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SupportServantData_o *)sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C5347C = 1;
  }
  userServantLeaderEntityList = v4->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_19;
  if ( LODWORD(userServantLeaderEntityList->max_length) <= v3 )
    goto LABEL_20;
  v6 = userServantLeaderEntityList->m_Items[v3];
  if ( !v6 )
    goto LABEL_19;
  equipTarget1 = v6->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v14, 0, 0);
  v8 = *(_OWORD *)&v14[0].fields.currentCryptoKey;
  v14[1] = v14[0];
  *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v14[0].fields.fakeValue;
  *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey = v8;
  v9 = v4->fields.userServantLeaderEntityList;
  if ( !v9 )
    goto LABEL_19;
  if ( LODWORD(v9->max_length) <= v3 )
    goto LABEL_20;
  v10 = v9->m_Items[v3];
  if ( !v10 )
    goto LABEL_19;
  v11 = v10->fields.equipTarget1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
  *(_QWORD *)&classPos = *(_QWORD *)&v12.fields.fakeValue;
  this = *(SupportServantData_o **)&v12.fields.currentCryptoKey;
  if ( !v11 )
LABEL_19:
    sub_1C3E7C0(this, *(_QWORD *)&classPos);
  v11->fields.svtId = v12;
LABEL_16:
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_19;
  if ( LODWORD(equipIdList->max_length) <= v3 )
LABEL_20:
    sub_1C3E7C8(this, *(_QWORD *)&classPos);
  equipIdList->m_Items[v3] = 0;
}


// local variable allocation has failed, the output may be wrong!
void SupportServantData__removeServantData(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v4; // x9
  struct System_Int64_array *servantIdList; // x11

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_8;
  if ( LODWORD(userServantLeaderEntityList->max_length) <= classPos )
    goto LABEL_9;
  v4 = userServantLeaderEntityList->m_Items[classPos];
  if ( !v4 || (v4->fields.userSvtId = 0, (servantIdList = this->fields.servantIdList) == 0) )
LABEL_8:
    sub_1C3E7C0(this, *(_QWORD *)&classPos);
  if ( LODWORD(servantIdList->max_length) <= classPos
    || (servantIdList->m_Items[classPos] = 0, LODWORD(userServantLeaderEntityList->max_length) <= classPos) )
  {
LABEL_9:
    sub_1C3E7C8(this, *(_QWORD *)&classPos);
  }
  v4->fields.svtId = 0;
}


// local variable allocation has failed, the output may be wrong!
void SupportServantData__setEquipData(
        SupportServantData_o *this,
        int32_t classPos,
        int64_t userSvtId,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v7; // w20
  SupportServantData_o *v8; // x22
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v10; // x23
  CGThumbnailListItem_o *p_equipTarget1; // x23
  struct EquipTargetInfo_o *equipTarget1; // t1
  EquipTargetInfo_o *v13; // x24
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UserServantLeaderEntity_o *v16; // x8
  struct EquipTargetInfo_o *v17; // x23
  __int128 v18; // q1
  struct System_Int64_array *equipIdList; // x8
  struct UserServantLeaderEntity_array *v20; // x8
  UserServantLeaderEntity_o *v21; // x8
  struct EquipTargetInfo_o *v22; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-60h]

  v7 = classPos;
  v8 = this;
  if ( (byte_4C5347B & 1) == 0 )
  {
    sub_1C3E564(&EquipTargetInfo_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SupportServantData_o *)sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C5347B = 1;
  }
  userServantLeaderEntityList = v8->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_24;
  if ( LODWORD(userServantLeaderEntityList->max_length) <= v7 )
    goto LABEL_25;
  v10 = userServantLeaderEntityList->m_Items[v7];
  if ( !v10 )
    goto LABEL_24;
  equipTarget1 = v10->fields.equipTarget1;
  p_equipTarget1 = (CGThumbnailListItem_o *)&v10->fields.equipTarget1;
  if ( !equipTarget1 )
  {
    v13 = (EquipTargetInfo_o *)sub_1C3E7B0(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor(v13, 0);
    p_equipTarget1->klass = (CGThumbnailListItem_c *)v13;
    sub_1C3E508(p_equipTarget1, (int32_t)v13, v14, v15);
    userServantLeaderEntityList = v8->fields.userServantLeaderEntityList;
    if ( !userServantLeaderEntityList )
      goto LABEL_24;
  }
  if ( LODWORD(userServantLeaderEntityList->max_length) <= v7 )
LABEL_25:
    sub_1C3E7C8(this, *(_QWORD *)&classPos);
  v16 = userServantLeaderEntityList->m_Items[v7];
  if ( !v16 )
    goto LABEL_24;
  v17 = v16->fields.equipTarget1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v24, userSvtId, 0);
  v25 = v24;
  if ( !v17 )
    goto LABEL_24;
  v18 = *(_OWORD *)&v25.fields.currentCryptoKey;
  *(_OWORD *)&v17->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v25.fields.fakeValue;
  *(_OWORD *)&v17->fields.userSvtId.fields.currentCryptoKey = v18;
  equipIdList = v8->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_24;
  if ( LODWORD(equipIdList->max_length) <= v7 )
    goto LABEL_25;
  equipIdList->m_Items[v7] = userSvtId;
  if ( svtId < 0 )
    return;
  v20 = v8->fields.userServantLeaderEntityList;
  if ( !v20 )
LABEL_24:
    sub_1C3E7C0(this, *(_QWORD *)&classPos);
  if ( LODWORD(v20->max_length) <= v7 )
    goto LABEL_25;
  v21 = v20->m_Items[v7];
  if ( !v21 )
    goto LABEL_24;
  v22 = v21->fields.equipTarget1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
  *(_QWORD *)&classPos = *(_QWORD *)&v23.fields.fakeValue;
  this = *(SupportServantData_o **)&v23.fields.currentCryptoKey;
  if ( !v22 )
    goto LABEL_24;
  v22->fields.svtId = v23;
}


// local variable allocation has failed, the output may be wrong!
void SupportServantData__setServantData(
        SupportServantData_o *this,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  SupportServantData_o *v6; // x21
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x25
  Il2CppClass **v8; // x22
  CGThumbnailListItem_o *v9; // x22
  Il2CppClass *v10; // t1
  UserServantLeaderEntity_o *v11; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UserServantLeaderEntity_array *v14; // x8
  __int128 v15; // q0
  __int128 v16; // q1
  struct System_Int64_array *servantIdList; // x20
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-60h]

  v6 = this;
  if ( (byte_4C5347A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (SupportServantData_o *)sub_1C3E564(&UserServantLeaderEntity_TypeInfo);
    byte_4C5347A = 1;
  }
  userServantLeaderEntityList = v6->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_20;
  if ( LODWORD(userServantLeaderEntityList->max_length) <= classPos )
    goto LABEL_21;
  v8 = &userServantLeaderEntityList->obj.klass + classPos;
  v10 = v8[4];
  v9 = (CGThumbnailListItem_o *)(v8 + 4);
  if ( !v10 )
  {
    v11 = (UserServantLeaderEntity_o *)sub_1C3E7B0(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v11, 0);
    if ( v11 )
    {
      this = (SupportServantData_o *)sub_1C3E6A0(v11, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !this )
      {
        v18 = sub_1C3E7E4();
        sub_1C3E68C(v18, 0);
      }
    }
    if ( LODWORD(userServantLeaderEntityList->max_length) <= classPos )
LABEL_21:
      sub_1C3E7C8(this, *(_QWORD *)&classPos);
    v9->klass = (CGThumbnailListItem_c *)v11;
    sub_1C3E508(v9, (int32_t)v11, v12, v13);
  }
  this = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_20;
  this = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)this,
                                   (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  v14 = v6->fields.userServantLeaderEntityList;
  if ( !v14 )
    goto LABEL_20;
  if ( LODWORD(v14->max_length) <= classPos )
    goto LABEL_21;
  this = (SupportServantData_o *)v14->m_Items[classPos];
  if ( !this )
    goto LABEL_20;
  UserServantLeaderEntity__setUserServantEntity(
    (UserServantLeaderEntity_o *)this,
    entity,
    classPos,
    v6->fields._deckId_k__BackingField,
    0);
  if ( !entity )
    goto LABEL_20;
  v15 = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  v16 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  servantIdList = v6->fields.servantIdList;
  *(_OWORD *)&v20.fields.currentCryptoKey = v15;
  *(_OWORD *)&v20.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v19 = v20;
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v19, 0);
  if ( !servantIdList )
LABEL_20:
    sub_1C3E7C0(this, *(_QWORD *)&classPos);
  if ( LODWORD(servantIdList->max_length) <= classPos )
    goto LABEL_21;
  servantIdList->m_Items[classPos] = (int64_t)this;
}


void SupportServantData__set_EventSetupInfo(
        SupportServantData_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.eventSetupInfo = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventSetupInfo, (int32_t)value, (int32_t)method, v3);
}


void SupportServantData__set_PushUserServantId(SupportServantData_o *this, int64_t value, const MethodInfo *method)
{
  this->fields.pushUserServantId = value;
}


void SupportServantData__set_deckId(SupportServantData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._deckId_k__BackingField = value;
}


void SupportServantData__set_deckName(SupportServantData_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._deckName_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._deckName_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void SupportServantData__set_oldDeckName(SupportServantData_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._oldDeckName_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._oldDeckName_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *SupportServantData__updateCheck(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  SupportServantData_o *v4; // x19
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x10
  struct System_Int64_array *oldEquipIdList; // x11
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  SupportServantData_o *v12; // x20
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct System_Int64_array *v24; // x8
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  struct System_Int64_array *v30; // x8
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  int32_t deckId_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t v37; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  v37 = classPos;
  if ( (byte_4C53481 & 1) == 0 )
  {
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_851/*",\"userSvtId\":"*/);
    sub_1C3E564(&StringLiteral_25278/*"}"*/);
    sub_1C3E564(&StringLiteral_847/*",\"classId\":"*/);
    sub_1C3E564(&StringLiteral_850/*",\"userSvtEquipId\":"*/);
    this = (SupportServantData_o *)sub_1C3E564(&StringLiteral_25060/*"{\"supportDeckId\":"*/);
    byte_4C53481 = 1;
  }
  servantIdList = v4->fields.servantIdList;
  if ( !servantIdList )
    goto LABEL_31;
  if ( LODWORD(servantIdList->max_length) <= classPos )
    goto LABEL_30;
  oldServantIdList = v4->fields.oldServantIdList;
  if ( !oldServantIdList )
    goto LABEL_31;
  if ( LODWORD(oldServantIdList->max_length) <= classPos )
    goto LABEL_30;
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_31;
  if ( LODWORD(equipIdList->max_length) <= classPos )
    goto LABEL_30;
  oldEquipIdList = v4->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    goto LABEL_31;
  if ( LODWORD(oldEquipIdList->max_length) <= classPos )
    goto LABEL_30;
  if ( servantIdList->m_Items[classPos] == oldServantIdList->m_Items[classPos]
    && equipIdList->m_Items[classPos] == oldEquipIdList->m_Items[classPos] )
  {
    return 0;
  }
  this = (SupportServantData_o *)sub_1C3E60C(string___TypeInfo, 9);
  if ( !this )
    goto LABEL_31;
  v12 = this;
  if ( !LODWORD(this->fields.servantIdList) )
    goto LABEL_30;
  v13 = StringLiteral_25060/*"{\"supportDeckId\":"*/;
  this->fields.oldServantIdList = (struct System_Int64_array *)StringLiteral_25060/*"{\"supportDeckId\":"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.oldServantIdList, v13, v10, v11);
  deckId_k__BackingField = v4->fields._deckId_k__BackingField;
  this = (SupportServantData_o *)System_Int32__ToString((int32_t)&deckId_k__BackingField, 0);
  if ( LODWORD(v12->fields.servantIdList) <= 1 )
    goto LABEL_30;
  v12->fields.equipIdList = (struct System_Int64_array *)this;
  sub_1C3E508((CGThumbnailListItem_o *)&v12->fields.equipIdList, (int32_t)this, v14, v15);
  if ( LODWORD(v12->fields.servantIdList) <= 2 )
    goto LABEL_30;
  v18 = StringLiteral_847/*",\"classId\":"*/;
  v12->fields.oldEquipIdList = (struct System_Int64_array *)StringLiteral_847/*",\"classId\":"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v12->fields.oldEquipIdList, v18, v16, v17);
  this = (SupportServantData_o *)System_Int32__ToString((int32_t)&v37, 0);
  if ( LODWORD(v12->fields.servantIdList) <= 3 )
    goto LABEL_30;
  v12->fields.className = (struct System_String_array *)this;
  sub_1C3E508((CGThumbnailListItem_o *)&v12->fields.className, (int32_t)this, v19, v20);
  if ( LODWORD(v12->fields.servantIdList) <= 4 )
    goto LABEL_30;
  v23 = StringLiteral_851/*",\"userSvtId\":"*/;
  *(_QWORD *)&v12->fields.isFriendInfo = StringLiteral_851/*",\"userSvtId\":"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v12->fields.isFriendInfo, v23, v21, v22);
  v24 = v4->fields.servantIdList;
  if ( !v24 )
    goto LABEL_31;
  if ( v37 >= LODWORD(v24->max_length)
    || (this = (SupportServantData_o *)System_Int64__ToString((int64_t)&v24->m_Items[v37], 0),
        LODWORD(v12->fields.servantIdList) <= 5)
    || (*(_QWORD *)&v12->fields.isSelectServant = this,
        sub_1C3E508((CGThumbnailListItem_o *)&v12->fields.isSelectServant, (int32_t)this, v25, v26),
        LODWORD(v12->fields.servantIdList) <= 6) )
  {
LABEL_30:
    sub_1C3E7C8(this, *(_QWORD *)&classPos);
  }
  v29 = StringLiteral_850/*",\"userSvtEquipId\":"*/;
  v12->fields.eventSetupInfo = (struct EventUpValSetupInfo_o *)StringLiteral_850/*",\"userSvtEquipId\":"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v12->fields.eventSetupInfo, v29, v27, v28);
  v30 = v4->fields.equipIdList;
  if ( !v30 )
LABEL_31:
    sub_1C3E7C0(this, *(_QWORD *)&classPos);
  if ( (unsigned int)v37 >= LODWORD(v30->max_length) )
    goto LABEL_30;
  this = (SupportServantData_o *)System_Int64__ToString((int64_t)&v30->m_Items[v37], 0);
  if ( LODWORD(v12->fields.servantIdList) <= 7 )
    goto LABEL_30;
  v12->fields.eventSetupInfo2 = (struct EventUpValSetupInfo_o *)this;
  sub_1C3E508((CGThumbnailListItem_o *)&v12->fields.eventSetupInfo2, (int32_t)this, v31, v32);
  if ( LODWORD(v12->fields.servantIdList) <= 8 )
    goto LABEL_30;
  v35 = StringLiteral_25278/*"}"*/;
  v12->fields.questRestrictionInfo = (struct QuestRestrictionInfo_o *)StringLiteral_25278/*"}"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v12->fields.questRestrictionInfo, v35, v33, v34);
  return System_String__Concat_63676984((System_String_array *)v12, 0);
}


System_String_o *SupportServantData__updateNameCheck(SupportServantData_o *this, const MethodInfo *method)
{
  bool v3; // w8
  System_String_o *result; // x0
  System_String_o *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_String_o *v9; // x20
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_String_o *deckName_k__BackingField; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t deckId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C53482 & 1) == 0 )
  {
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_25060/*"{\"supportDeckId\":"*/);
    sub_1C3E564(&StringLiteral_848/*",\"name\":\""*/);
    sub_1C3E564(&StringLiteral_368/*"\"}"*/);
    byte_4C53482 = 1;
  }
  v3 = System_String__op_Inequality(
         this->fields._deckName_k__BackingField,
         this->fields._oldDeckName_k__BackingField,
         0);
  result = 0;
  if ( v3 )
  {
    v5 = (System_String_o *)sub_1C3E60C(string___TypeInfo, 5);
    if ( !v5 )
      sub_1C3E7C0(0, v6);
    v9 = v5;
    if ( !LODWORD(v5[1].klass) )
      goto LABEL_12;
    v10 = StringLiteral_25060/*"{\"supportDeckId\":"*/;
    v5[1].monitor = (void *)StringLiteral_25060/*"{\"supportDeckId\":"*/;
    sub_1C3E508((CGThumbnailListItem_o *)&v5[1].monitor, v10, v7, v8);
    deckId_k__BackingField = this->fields._deckId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&deckId_k__BackingField, 0);
    if ( LODWORD(v9[1].klass) <= 1 )
      goto LABEL_12;
    v9[1].fields = (System_String_Fields)v5;
    sub_1C3E508((CGThumbnailListItem_o *)&v9[1].fields, (int32_t)v5, v11, v12);
    if ( LODWORD(v9[1].klass) <= 2
      || (v15 = StringLiteral_848/*",\"name\":\""*/,
          v9[2].klass = (System_String_c *)StringLiteral_848/*",\"name\":\""*/,
          sub_1C3E508((CGThumbnailListItem_o *)&v9[2], v15, v13, v14),
          LODWORD(v9[1].klass) <= 3)
      || (deckName_k__BackingField = this->fields._deckName_k__BackingField,
          v9[2].monitor = deckName_k__BackingField,
          sub_1C3E508((CGThumbnailListItem_o *)&v9[2].monitor, (int32_t)deckName_k__BackingField, v16, v17),
          LODWORD(v9[1].klass) <= 4) )
    {
LABEL_12:
      sub_1C3E7C8(v5, v6);
    }
    v21 = StringLiteral_368/*"\"}"*/;
    v9[2].fields = (System_String_Fields)StringLiteral_368/*"\"}"*/;
    sub_1C3E508((CGThumbnailListItem_o *)&v9[2].fields, v21, v19, v20);
    return System_String__Concat_63676984((System_String_array *)v9, 0);
  }
  return result;
}


void SupportServantData_FollowerData___ctor(SupportServantData_FollowerData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}