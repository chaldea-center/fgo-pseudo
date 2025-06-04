void __fastcall SupportServantData___ctor(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BalanceConfig_c *v15; // x0
  struct UserServantLeaderEntity_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Int64_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Int64_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Int64_array *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Int64_array *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  const MethodInfo *v34; // x3
  __int64 v35; // x20
  int32_t v36; // w1
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  const MethodInfo *v41; // x3
  int32_t v42; // w1
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  const MethodInfo *v45; // x3
  int32_t v46; // w1
  const MethodInfo *v47; // x3
  int32_t v48; // w1
  const MethodInfo *v49; // x3
  int32_t v50; // w1
  const MethodInfo *v51; // x3
  int32_t v52; // w1
  int32_t v53; // w2
  const MethodInfo *v54; // x3

  if ( (byte_4AFE747 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&long___TypeInfo, v3);
    sub_1BC3008(&string___TypeInfo, v4);
    sub_1BC3008(&UserServantLeaderEntity___TypeInfo, v5);
    sub_1BC3008(&StringLiteral_12386/*"SUPPORT_KIND_4"*/, v6);
    sub_1BC3008(&StringLiteral_12389/*"SUPPORT_KIND_7"*/, v7);
    sub_1BC3008(&StringLiteral_12384/*"SUPPORT_KIND_2"*/, v8);
    sub_1BC3008(&StringLiteral_12387/*"SUPPORT_KIND_5"*/, v9);
    sub_1BC3008(&StringLiteral_12390/*"SUPPORT_KIND_8"*/, v10);
    sub_1BC3008(&StringLiteral_12385/*"SUPPORT_KIND_3"*/, v11);
    sub_1BC3008(&StringLiteral_12383/*"SUPPORT_KIND_1"*/, v12);
    sub_1BC3008(&StringLiteral_12382/*"SUPPORT_KIND_0"*/, v13);
    sub_1BC3008(&StringLiteral_12388/*"SUPPORT_KIND_6"*/, v14);
    byte_4AFE747 = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = (struct UserServantLeaderEntity_array *)sub_1BC30B0(
                                                  UserServantLeaderEntity___TypeInfo,
                                                  (unsigned int)v15->static_fields->SupportDeckMemberMax);
  this->fields.userServantLeaderEntityList = v16;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)v16, v17, v18);
  v19 = (struct System_Int64_array *)sub_1BC30B0(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.servantIdList = v19;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.servantIdList, (int32_t)v19, v20, v21);
  v22 = (struct System_Int64_array *)sub_1BC30B0(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldServantIdList = v22;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.oldServantIdList, (int32_t)v22, v23, v24);
  v25 = (struct System_Int64_array *)sub_1BC30B0(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.equipIdList = v25;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)v25, v26, v27);
  v28 = (struct System_Int64_array *)sub_1BC30B0(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldEquipIdList = v28;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.oldEquipIdList, (int32_t)v28, v29, v30);
  v31 = sub_1BC30B0(string___TypeInfo, 9LL);
  if ( !v31 )
    sub_1BC3264(0LL, v32);
  v35 = v31;
  if ( !*(_DWORD *)(v31 + 24) )
    goto LABEL_16;
  v36 = StringLiteral_12382/*"SUPPORT_KIND_0"*/;
  *(_QWORD *)(v31 + 32) = StringLiteral_12382/*"SUPPORT_KIND_0"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v31 + 32), v36, v33, v34);
  if ( *(_DWORD *)(v35 + 24) <= 1u )
    goto LABEL_16;
  v38 = StringLiteral_12383/*"SUPPORT_KIND_1"*/;
  *(_QWORD *)(v35 + 40) = StringLiteral_12383/*"SUPPORT_KIND_1"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v35 + 40), v38, v33, v37);
  if ( *(_DWORD *)(v35 + 24) <= 2u )
    goto LABEL_16;
  v40 = StringLiteral_12384/*"SUPPORT_KIND_2"*/;
  *(_QWORD *)(v35 + 48) = StringLiteral_12384/*"SUPPORT_KIND_2"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v35 + 48), v40, v33, v39);
  if ( *(_DWORD *)(v35 + 24) <= 3u )
    goto LABEL_16;
  v42 = StringLiteral_12385/*"SUPPORT_KIND_3"*/;
  *(_QWORD *)(v35 + 56) = StringLiteral_12385/*"SUPPORT_KIND_3"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v35 + 56), v42, v33, v41);
  if ( *(_DWORD *)(v35 + 24) <= 4u )
    goto LABEL_16;
  v44 = StringLiteral_12386/*"SUPPORT_KIND_4"*/;
  *(_QWORD *)(v35 + 64) = StringLiteral_12386/*"SUPPORT_KIND_4"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v35 + 64), v44, v33, v43);
  if ( *(_DWORD *)(v35 + 24) <= 5u )
    goto LABEL_16;
  v46 = StringLiteral_12387/*"SUPPORT_KIND_5"*/;
  *(_QWORD *)(v35 + 72) = StringLiteral_12387/*"SUPPORT_KIND_5"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v35 + 72), v46, v33, v45);
  if ( *(_DWORD *)(v35 + 24) <= 6u
    || (v48 = StringLiteral_12388/*"SUPPORT_KIND_6"*/,
        *(_QWORD *)(v35 + 80) = StringLiteral_12388/*"SUPPORT_KIND_6"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v35 + 80), v48, v33, v47),
        *(_DWORD *)(v35 + 24) <= 7u)
    || (v50 = StringLiteral_12389/*"SUPPORT_KIND_7"*/,
        *(_QWORD *)(v35 + 88) = StringLiteral_12389/*"SUPPORT_KIND_7"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v35 + 88), v50, v33, v49),
        *(_DWORD *)(v35 + 24) <= 8u) )
  {
LABEL_16:
    sub_1BC326C(v31, v32, v33);
  }
  v52 = StringLiteral_12390/*"SUPPORT_KIND_8"*/;
  *(_QWORD *)(v35 + 96) = StringLiteral_12390/*"SUPPORT_KIND_8"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v35 + 96), v52, v33, v51);
  this->fields.className = (struct System_String_array *)v35;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.className, v35, v53, v54);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SupportServantData__CopyData(
        SupportServantData_o *this,
        SupportServantData_o *data,
        bool isInit,
        const MethodInfo *method)
{
  SupportServantData_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x2
  struct UserServantLeaderEntity_array *v14; // x8
  __int64 v15; // x27
  __int64 v16; // x28
  unsigned __int64 max_length; // x9
  unsigned __int64 v18; // x29
  unsigned int *v19; // x21
  UserServantLeaderEntity_o *v20; // x24
  UserServantLeaderEntity_o *v21; // x23
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x22
  __int64 v27; // x0
  CGThumbnailListItem_o *p_servantIdList; // x23
  __int64 v29; // x0
  int32_t v30; // w1
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x0
  CGThumbnailListItem_o *p_oldServantIdList; // x23
  __int64 v36; // x0
  int32_t v37; // w1
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x0
  CGThumbnailListItem_o *p_equipIdList; // x23
  __int64 v43; // x0
  int32_t v44; // w1
  Il2CppObject *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x0
  CGThumbnailListItem_o *p_oldEquipIdList; // x23
  __int64 v50; // x0
  int32_t v51; // w1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct EventUpValSetupInfo_o *eventSetupInfo; // x1
  struct EventUpValSetupInfo_o *eventSetupInfo2; // x1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct System_String_o *deckName_k__BackingField; // x1
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  struct System_String_o *oldDeckName_k__BackingField; // x1
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  __int64 v67; // x0
  SupportSelectRootComponent_o *v68; // x0
  bool v69; // w1
  const MethodInfo *v70; // x2
  bool v71; // [xsp+Ch] [xbp-64h]

  v6 = this;
  if ( (byte_4AFE759 & 1) == 0 )
  {
    sub_1BC3008(&long___TypeInfo, data);
    sub_1BC3008(&UserServantLeaderEntity___TypeInfo, v7);
    this = (SupportServantData_o *)sub_1BC3008(&UserServantLeaderEntity_TypeInfo, v8);
    byte_4AFE759 = 1;
  }
  if ( !data )
    goto LABEL_14;
  userServantLeaderEntityList = data->fields.userServantLeaderEntityList;
  v71 = isInit;
  if ( !userServantLeaderEntityList )
    goto LABEL_14;
  v10 = sub_1BC30B0(UserServantLeaderEntity___TypeInfo, userServantLeaderEntityList->max_length);
  v6->fields.userServantLeaderEntityList = (struct UserServantLeaderEntity_array *)v10;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v6->fields, v10, v11, v12);
  v14 = data->fields.userServantLeaderEntityList;
  if ( !v14 )
    goto LABEL_14;
  v15 = 4LL;
  v16 = 8LL;
  while ( 1 )
  {
    max_length = v14->max_length;
    v18 = v15 - 4;
    if ( v15 - 4 >= (int)max_length )
      break;
    if ( v18 >= max_length )
      goto LABEL_42;
    v19 = (unsigned int *)v6->fields.userServantLeaderEntityList;
    v20 = (UserServantLeaderEntity_o *)*((_QWORD *)&v14->obj.klass + v15);
    v21 = (UserServantLeaderEntity_o *)sub_1BC3254(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_42187704(v21, v20, 0LL);
    if ( v19 )
    {
      if ( v21 )
      {
        this = (SupportServantData_o *)sub_1BC3144(v21, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
        if ( !this )
        {
          v67 = sub_1BC3288();
          sub_1BC3130(v67, 0LL);
        }
      }
      if ( v18 >= v19[6] )
LABEL_42:
        sub_1BC326C(this, data, v13);
      *(_QWORD *)&v19[2 * v15] = v21;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v19[v16], (int32_t)v21, v13, v22);
      v14 = data->fields.userServantLeaderEntityList;
      ++v15;
      v16 += 2LL;
      if ( v14 )
        continue;
    }
    goto LABEL_14;
  }
  this = (SupportServantData_o *)data->fields.servantIdList;
  if ( !this )
    goto LABEL_14;
  v23 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v23 )
  {
    v26 = v23;
    v27 = sub_1BC3144(v23, long___TypeInfo);
    if ( !v27 )
      goto LABEL_44;
    v6->fields.servantIdList = (struct System_Int64_array *)v27;
    p_servantIdList = (CGThumbnailListItem_o *)&v6->fields.servantIdList;
    v29 = sub_1BC3144(v26, long___TypeInfo);
    if ( !v29 )
      goto LABEL_45;
    v30 = v29;
  }
  else
  {
    v30 = 0;
    v6->fields.servantIdList = 0LL;
    p_servantIdList = (CGThumbnailListItem_o *)&v6->fields.servantIdList;
  }
  sub_1BC2FAC(p_servantIdList, v30, v24, v25);
  this = (SupportServantData_o *)data->fields.oldServantIdList;
  if ( !this )
    goto LABEL_14;
  v31 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v31 )
  {
    v26 = v31;
    v34 = sub_1BC3144(v31, long___TypeInfo);
    if ( !v34 )
      goto LABEL_44;
    v6->fields.oldServantIdList = (struct System_Int64_array *)v34;
    p_oldServantIdList = (CGThumbnailListItem_o *)&v6->fields.oldServantIdList;
    v36 = sub_1BC3144(v26, long___TypeInfo);
    if ( !v36 )
      goto LABEL_45;
    v37 = v36;
  }
  else
  {
    v37 = 0;
    v6->fields.oldServantIdList = 0LL;
    p_oldServantIdList = (CGThumbnailListItem_o *)&v6->fields.oldServantIdList;
  }
  sub_1BC2FAC(p_oldServantIdList, v37, v32, v33);
  this = (SupportServantData_o *)data->fields.equipIdList;
  if ( !this )
    goto LABEL_14;
  v38 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v38 )
  {
    v26 = v38;
    v41 = sub_1BC3144(v38, long___TypeInfo);
    if ( !v41 )
      goto LABEL_44;
    v6->fields.equipIdList = (struct System_Int64_array *)v41;
    p_equipIdList = (CGThumbnailListItem_o *)&v6->fields.equipIdList;
    v43 = sub_1BC3144(v26, long___TypeInfo);
    if ( !v43 )
      goto LABEL_45;
    v44 = v43;
  }
  else
  {
    v44 = 0;
    v6->fields.equipIdList = 0LL;
    p_equipIdList = (CGThumbnailListItem_o *)&v6->fields.equipIdList;
  }
  sub_1BC2FAC(p_equipIdList, v44, v39, v40);
  this = (SupportServantData_o *)data->fields.oldEquipIdList;
  if ( !this )
LABEL_14:
    sub_1BC3264(this, data);
  v45 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v45 )
  {
    v26 = v45;
    v48 = sub_1BC3144(v45, long___TypeInfo);
    if ( v48 )
    {
      v6->fields.oldEquipIdList = (struct System_Int64_array *)v48;
      p_oldEquipIdList = (CGThumbnailListItem_o *)&v6->fields.oldEquipIdList;
      v50 = sub_1BC3144(v26, long___TypeInfo);
      if ( v50 )
      {
        v51 = v50;
        goto LABEL_39;
      }
LABEL_45:
      sub_1BC3524(v26);
      SupportSelectRootComponent__EndRemoveAll(v68, v69, v70);
      return;
    }
LABEL_44:
    sub_1BC3524(v26);
    goto LABEL_45;
  }
  v51 = 0;
  v6->fields.oldEquipIdList = 0LL;
  p_oldEquipIdList = (CGThumbnailListItem_o *)&v6->fields.oldEquipIdList;
LABEL_39:
  sub_1BC2FAC(p_oldEquipIdList, v51, v46, v47);
  if ( v71 )
  {
    v6->fields.isFriendInfo = data->fields.isFriendInfo;
    v6->fields.kind = data->fields.kind;
    v6->fields.isSelectServant = data->fields.isSelectServant;
    eventSetupInfo = data->fields.eventSetupInfo;
    v6->fields.eventSetupInfo = eventSetupInfo;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v6->fields.eventSetupInfo, (int32_t)eventSetupInfo, v52, v53);
    eventSetupInfo2 = data->fields.eventSetupInfo2;
    v6->fields.eventSetupInfo2 = eventSetupInfo2;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v6->fields.eventSetupInfo2, (int32_t)eventSetupInfo2, v56, v57);
    questRestrictionInfo = data->fields.questRestrictionInfo;
    v6->fields.questRestrictionInfo = questRestrictionInfo;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v6->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v59, v60);
    v6->fields.pushUserServantId = data->fields.pushUserServantId;
    v6->fields._deckId_k__BackingField = data->fields._deckId_k__BackingField;
    deckName_k__BackingField = data->fields._deckName_k__BackingField;
    v6->fields._deckName_k__BackingField = deckName_k__BackingField;
    sub_1BC2FAC(
      (CGThumbnailListItem_o *)&v6->fields._deckName_k__BackingField,
      (int32_t)deckName_k__BackingField,
      v62,
      v63);
    oldDeckName_k__BackingField = data->fields._oldDeckName_k__BackingField;
    v6->fields._oldDeckName_k__BackingField = oldDeckName_k__BackingField;
    sub_1BC2FAC(
      (CGThumbnailListItem_o *)&v6->fields._oldDeckName_k__BackingField,
      (int32_t)oldDeckName_k__BackingField,
      v65,
      v66);
  }
}


System_Int64_array *__fastcall SupportServantData__GetEquipList(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.equipIdList;
}


// local variable allocation has failed, the output may be wrong!
SupportServantData_FollowerData_o *__fastcall SupportServantData__GetFollowerDataIfUpdated(
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
  if ( (byte_4AFE752 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_1BC3008(&SupportServantData_FollowerData_TypeInfo, *(_QWORD *)&classPos);
    byte_4AFE752 = 1;
  }
  servantIdList = v4->fields.servantIdList;
  if ( !servantIdList )
    goto LABEL_21;
  if ( servantIdList->max_length <= classPos )
    goto LABEL_22;
  oldServantIdList = v4->fields.oldServantIdList;
  if ( !oldServantIdList )
    goto LABEL_21;
  if ( oldServantIdList->max_length <= classPos )
    goto LABEL_22;
  if ( servantIdList->m_Items[classPos] != oldServantIdList->m_Items[classPos] )
    goto LABEL_14;
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_21;
  if ( equipIdList->max_length <= classPos )
    goto LABEL_22;
  oldEquipIdList = v4->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    goto LABEL_21;
  if ( oldEquipIdList->max_length <= classPos )
    goto LABEL_22;
  if ( equipIdList->m_Items[classPos] != oldEquipIdList->m_Items[classPos] )
  {
LABEL_14:
    v9 = sub_1BC3254(SupportServantData_FollowerData_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0LL);
    if ( v9 )
    {
      *(_DWORD *)(v9 + 16) = v4->fields._deckId_k__BackingField;
      *(_DWORD *)(v9 + 20) = classPos;
      v10 = v4->fields.servantIdList;
      if ( v10 )
      {
        if ( v10->max_length <= classPos )
          goto LABEL_22;
        *(_QWORD *)(v9 + 24) = v10->m_Items[classPos];
        v11 = v4->fields.equipIdList;
        if ( v11 )
        {
          if ( v11->max_length > classPos )
          {
            *(_QWORD *)(v9 + 32) = v11->m_Items[classPos];
            return (SupportServantData_FollowerData_o *)v9;
          }
LABEL_22:
          sub_1BC326C(this, *(_QWORD *)&classPos, method);
        }
      }
    }
LABEL_21:
    sub_1BC3264(this, *(_QWORD *)&classPos);
  }
  return 0LL;
}


UserServantLeaderEntity_array *__fastcall SupportServantData__GetUserServantLeaderList(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantLeaderEntityList;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__Init(
        SupportServantData_o *this,
        int32_t deckId,
        EventUpValSetupInfo_o *eventUpSetupInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Instance; // x0
  __int64 i; // x26
  unsigned __int64 v12; // x27
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldServantIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x8
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v18; // x21
  struct UserServantLeaderEntity_array *SupportDeck; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x22
  int max_length; // w8
  unsigned int v25; // w25
  struct System_Int64_array *v26; // x8
  __int64 v27; // x26
  struct System_Int64_array *v28; // x9
  int64_t v29; // x10
  struct System_Int64_array *v30; // x27
  struct System_Int64_array *v31; // x28
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_String_o *DeckName; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_String_o *DefaultDeckName; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_String_o *deckName_k__BackingField; // x1

  if ( (byte_4AFE748 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&deckId);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserSupportDeckMaster___, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4AFE748 = 1;
  }
  Instance = (int64_t)BalanceConfig_TypeInfo;
  for ( i = 4LL; ; ++i )
  {
    v12 = i - 4;
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v12 >= *(int *)(*(_QWORD *)(Instance + 184) + 180LL) )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_40;
    if ( v12 >= servantIdList->max_length )
      goto LABEL_41;
    *((_QWORD *)&servantIdList->obj.klass + i) = 0LL;
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_40;
    if ( v12 >= equipIdList->max_length )
      goto LABEL_41;
    *((_QWORD *)&equipIdList->obj.klass + i) = 0LL;
    oldServantIdList = this->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_40;
    if ( v12 >= oldServantIdList->max_length )
      goto LABEL_41;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = 0LL;
    oldEquipIdList = this->fields.oldEquipIdList;
    if ( !oldEquipIdList )
      goto LABEL_40;
    if ( v12 >= oldEquipIdList->max_length )
      goto LABEL_41;
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = 0LL;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields._deckId_k__BackingField = deckId;
  v18 = SelfUserGame;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_40;
  SupportDeck = UserServantLeaderMaster__getSupportDeck(
                  (UserServantLeaderMaster_o *)Instance,
                  this->fields._deckId_k__BackingField,
                  0LL);
  this->fields.userServantLeaderEntityList = SupportDeck;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)SupportDeck, v20, v21);
  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_40;
  max_length = userServantLeaderEntityList->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( v25 < max_length )
    {
      Instance = (int64_t)userServantLeaderEntityList->m_Items[v25];
      if ( !Instance )
        goto LABEL_40;
      if ( *(_DWORD *)(Instance + 48) == this->fields._deckId_k__BackingField )
      {
        v26 = this->fields.oldServantIdList;
        if ( !v26 )
          goto LABEL_40;
        v27 = *(int *)(Instance + 52);
        if ( (unsigned int)v27 >= v26->max_length )
          break;
        v28 = this->fields.servantIdList;
        v29 = *(_QWORD *)(Instance + 56);
        v26->m_Items[v27] = v29;
        if ( !v28 )
          goto LABEL_40;
        if ( (unsigned int)v27 >= v28->max_length )
          break;
        v28->m_Items[v27] = v29;
        v30 = this->fields.equipIdList;
        v31 = this->fields.oldEquipIdList;
        Instance = UserServantLeaderEntity__getEquipUserSvtId((UserServantLeaderEntity_o *)Instance, 0LL);
        if ( !v31 )
          goto LABEL_40;
        if ( (unsigned int)v27 >= v31->max_length )
          break;
        v31->m_Items[v27] = Instance;
        if ( !v30 )
          goto LABEL_40;
        if ( (unsigned int)v27 >= v30->max_length )
          break;
        v30->m_Items[v27] = Instance;
      }
      max_length = userServantLeaderEntityList->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_34;
    }
LABEL_41:
    sub_1BC326C(Instance, *(_QWORD *)&deckId, eventUpSetupInfo);
  }
LABEL_34:
  this->fields.isFriendInfo = 0;
  this->fields.isSelectServant = 0;
  this->fields.kind = 1;
  this->fields.eventSetupInfo2 = eventUpSetupInfo;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.eventSetupInfo2,
    (int32_t)eventUpSetupInfo,
    (int32_t)eventUpSetupInfo,
    v22);
  this->fields.eventSetupInfo = eventUpSetupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.eventSetupInfo, (int32_t)eventUpSetupInfo, v32, v33);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v34, v35);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserSupportDeckMaster___);
  if ( !Instance )
    goto LABEL_40;
  DeckName = UserSupportDeckMaster__getDeckName(
               (UserSupportDeckMaster_o *)Instance,
               this->fields._deckId_k__BackingField,
               0LL);
  this->fields._deckName_k__BackingField = DeckName;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._deckName_k__BackingField, (int32_t)DeckName, v37, v38);
  if ( System_String__IsNullOrEmpty(this->fields._deckName_k__BackingField, 0LL) )
  {
    DefaultDeckName = SupportServantData__getDefaultDeckName(this, v39);
    this->fields._deckName_k__BackingField = DefaultDeckName;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._deckName_k__BackingField, (int32_t)DefaultDeckName, v43, v44);
  }
  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  this->fields._oldDeckName_k__BackingField = deckName_k__BackingField;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._oldDeckName_k__BackingField,
    (int32_t)deckName_k__BackingField,
    v40,
    v41);
  if ( !v18 )
LABEL_40:
    sub_1BC3264(Instance, *(_QWORD *)&deckId);
  this->fields.pushUserServantId = v18->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__Init_34752960(
        SupportServantData_o *this,
        OtherUserGameEntity_o *otherData,
        int32_t friendKind,
        bool isSelectServant,
        EventUpValSetupInfo_o *eventSetupInfo,
        int32_t displayType,
        int32_t deckId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  unsigned __int64 v14; // x25
  __int64 i; // x27
  BalanceConfig_c *v16; // x0
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x24
  UserServantLeaderEntity_o *v18; // x26
  __int64 ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v20; // x1
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
  if ( (byte_4AFE74A & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, otherData);
    sub_1BC3008(&UserServantLeaderEntity_TypeInfo, v13);
    byte_4AFE74A = 1;
  }
  v14 = 0LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v16 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v14 >= v16->static_fields->SupportDeckMemberMax )
      break;
    userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
    v18 = (UserServantLeaderEntity_o *)sub_1BC3254(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v18, 0LL);
    if ( !userServantLeaderEntityList )
      goto LABEL_46;
    if ( v18 )
    {
      ServantLeaderInfo = sub_1BC3144(v18, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !ServantLeaderInfo )
      {
        v39 = sub_1BC3288();
        sub_1BC3130(v39, 0LL);
      }
    }
    if ( v14 >= userServantLeaderEntityList->max_length )
      goto LABEL_47;
    userServantLeaderEntityList->m_Items[v14] = v18;
    sub_1BC2FAC((CGThumbnailListItem_o *)((char *)userServantLeaderEntityList + i), (int32_t)v18, friendKind, v21);
    if ( !otherData )
      goto LABEL_46;
    ServantLeaderInfo = (__int64)OtherUserGameEntity__getServantLeaderInfo(
                                   otherData,
                                   v14,
                                   0,
                                   displayType,
                                   deckId,
                                   0,
                                   0LL);
    if ( ServantLeaderInfo )
    {
      v22 = this->fields.userServantLeaderEntityList;
      if ( !v22 )
        goto LABEL_46;
      if ( v14 >= v22->max_length )
        goto LABEL_47;
      v20 = (ServantLeaderInfo_o *)ServantLeaderInfo;
      ServantLeaderInfo = (__int64)v22->m_Items[v14];
      if ( !ServantLeaderInfo )
        goto LABEL_46;
      UserServantLeaderEntity__setUserServantEntity_42188388((UserServantLeaderEntity_o *)ServantLeaderInfo, v20, 0LL);
      servantIdList = this->fields.servantIdList;
      oldServantIdList = this->fields.oldServantIdList;
      ServantLeaderInfo = OtherUserGameEntity__getUserSvtId(otherData, v14, displayType, 0, 0LL);
      if ( !oldServantIdList )
        goto LABEL_46;
      if ( v14 >= oldServantIdList->max_length )
        goto LABEL_47;
      oldServantIdList->m_Items[v14] = ServantLeaderInfo;
      if ( !servantIdList )
        goto LABEL_46;
      if ( v14 >= servantIdList->max_length )
        goto LABEL_47;
    }
    else
    {
      v25 = this->fields.oldServantIdList;
      if ( !v25 )
        goto LABEL_46;
      if ( v14 >= v25->max_length )
        goto LABEL_47;
      servantIdList = this->fields.servantIdList;
      v25->m_Items[v14] = 0LL;
      if ( !servantIdList )
        goto LABEL_46;
      if ( v14 >= servantIdList->max_length )
        goto LABEL_47;
      ServantLeaderInfo = 0LL;
    }
    servantIdList->m_Items[v14] = ServantLeaderInfo;
    ServantLeaderInfo = OtherUserGameEntity__getEquipSvtId(otherData, v14, displayType, deckId, 0, 0LL);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v26 = this->fields.userServantLeaderEntityList;
      if ( !v26 )
        goto LABEL_46;
      if ( v14 >= v26->max_length )
        goto LABEL_47;
      v27 = v26->m_Items[v14];
      ServantLeaderInfo = (__int64)OtherUserGameEntity__getEquipInfo(otherData, v14, displayType, deckId, 0, 0, 0LL);
      if ( !v27 )
        goto LABEL_46;
      v27->fields.equipTarget1 = (struct EquipTargetInfo_o *)ServantLeaderInfo;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v27->fields.equipTarget1, ServantLeaderInfo, v28, v29);
      equipIdList = this->fields.equipIdList;
      oldEquipIdList = this->fields.oldEquipIdList;
      ServantLeaderInfo = OtherUserGameEntity__getEquipUserSvtId(otherData, v14, displayType, deckId, 0, 0LL);
      if ( !oldEquipIdList )
        goto LABEL_46;
      if ( v14 >= oldEquipIdList->max_length )
        goto LABEL_47;
      oldEquipIdList->m_Items[v14] = ServantLeaderInfo;
      if ( !equipIdList )
        goto LABEL_46;
      if ( v14 >= equipIdList->max_length )
        goto LABEL_47;
    }
    else
    {
      v32 = this->fields.oldEquipIdList;
      if ( !v32 )
        goto LABEL_46;
      if ( v14 >= v32->max_length )
        goto LABEL_47;
      equipIdList = this->fields.equipIdList;
      v32->m_Items[v14] = 0LL;
      if ( !equipIdList )
        goto LABEL_46;
      if ( v14 >= equipIdList->max_length )
LABEL_47:
        sub_1BC326C(ServantLeaderInfo, v20, *(_QWORD *)&friendKind);
      ServantLeaderInfo = 0LL;
    }
    v33 = &equipIdList->obj.klass + v14++;
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
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.eventSetupInfo2,
    (int32_t)eventSetupInfo,
    friendKind,
    (const MethodInfo *)isSelectServant);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.eventSetupInfo, (int32_t)eventSetupInfo, v35, v36);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v37, v38);
  if ( !otherData )
LABEL_46:
    sub_1BC3264(ServantLeaderInfo, v20);
  this->fields.pushUserServantId = otherData->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__Init_34755004(
        SupportServantData_o *this,
        FollowerInfo_o *followerInfo,
        int32_t friendKind,
        bool isSelectServant,
        EventUpValSetupInfo_o *eventSetupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t deckId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t ReturnTypeByQuestId; // w25
  unsigned __int64 v16; // x26
  __int64 i; // x22
  BalanceConfig_c *v18; // x0
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x24
  UserServantLeaderEntity_o *v20; // x27
  __int64 ServantLeaderInfo; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  int32_t IndexForSupport; // w27
  ServantLeaderInfo_o *v25; // x28
  __int64 v26; // x24
  __int64 v27; // x29
  struct System_Int64_array *servantIdList; // x24
  struct System_Int64_array *oldServantIdList; // x29
  struct UserServantLeaderEntity_array *v30; // x8
  struct System_Int64_array *v31; // x9
  struct System_Int64_array *v32; // x8
  struct UserServantLeaderEntity_array *v33; // x8
  UserServantLeaderEntity_o *v34; // x28
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Int64_array *equipIdList; // x24
  struct System_Int64_array *oldEquipIdList; // x28
  struct System_Int64_array *v39; // x8
  Il2CppClass **v40; // x8
  int32_t v41; // w8
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x0
  bool v47; // [xsp+8h] [xbp-78h]
  struct QuestRestrictionInfo_o *v50; // [xsp+18h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4AFE74B & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, followerInfo);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BC3008(&UserServantLeaderEntity_TypeInfo, v14);
    byte_4AFE74B = 1;
  }
  v47 = isSelectServant;
  v50 = questRestrictionInfo;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
  v16 = 0LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v18 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v16 >= v18->static_fields->SupportDeckMemberMax )
      break;
    userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
    v20 = (UserServantLeaderEntity_o *)sub_1BC3254(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v20, 0LL);
    if ( !userServantLeaderEntityList )
      goto LABEL_53;
    if ( v20 )
    {
      ServantLeaderInfo = sub_1BC3144(v20, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !ServantLeaderInfo )
      {
        v46 = sub_1BC3288();
        sub_1BC3130(v46, 0LL);
      }
    }
    if ( v16 >= userServantLeaderEntityList->max_length )
      goto LABEL_54;
    userServantLeaderEntityList->m_Items[v16] = v20;
    sub_1BC2FAC((CGThumbnailListItem_o *)((char *)userServantLeaderEntityList + i), (int32_t)v20, friendKind, v23);
    if ( !followerInfo )
      goto LABEL_53;
    IndexForSupport = FollowerInfo__getIndexForSupport(followerInfo, v16, ReturnTypeByQuestId, deckId, 0LL);
    ServantLeaderInfo = (__int64)FollowerInfo__getServantLeaderInfo(
                                   followerInfo,
                                   IndexForSupport,
                                   ReturnTypeByQuestId,
                                   0LL);
    if ( ServantLeaderInfo )
    {
      v25 = (ServantLeaderInfo_o *)ServantLeaderInfo;
      v26 = *(_QWORD *)(ServantLeaderInfo + 48);
      v27 = *(_QWORD *)(ServantLeaderInfo + 56);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v51.fields.currentCryptoKey = v26;
      *(_QWORD *)&v51.fields.fakeValue = v27;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v51, 0LL) )
      {
        servantIdList = this->fields.servantIdList;
        oldServantIdList = this->fields.oldServantIdList;
        ServantLeaderInfo = FollowerInfo__getUserSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0LL);
        if ( !oldServantIdList )
          goto LABEL_53;
        if ( v16 >= oldServantIdList->max_length )
          goto LABEL_54;
        oldServantIdList->m_Items[v16] = ServantLeaderInfo;
        if ( !servantIdList )
          goto LABEL_53;
        if ( v16 >= servantIdList->max_length )
          goto LABEL_54;
        servantIdList->m_Items[v16] = ServantLeaderInfo;
        v30 = this->fields.userServantLeaderEntityList;
        if ( !v30 )
          goto LABEL_53;
        if ( v16 >= v30->max_length )
          goto LABEL_54;
        ServantLeaderInfo = (__int64)v30->m_Items[v16];
        if ( !ServantLeaderInfo )
          goto LABEL_53;
        UserServantLeaderEntity__setUserServantEntity_42188388((UserServantLeaderEntity_o *)ServantLeaderInfo, v25, 0LL);
        goto LABEL_33;
      }
      ServantLeaderInfo__SetEquipImagePartsGroupIdxs(v25, 0LL);
    }
    v31 = this->fields.oldServantIdList;
    if ( !v31 )
      goto LABEL_53;
    if ( v16 >= v31->max_length )
      goto LABEL_54;
    v32 = this->fields.servantIdList;
    v31->m_Items[v16] = 0LL;
    if ( !v32 )
      goto LABEL_53;
    if ( v16 >= v32->max_length )
      goto LABEL_54;
    v32->m_Items[v16] = 0LL;
LABEL_33:
    ServantLeaderInfo = FollowerInfo__getEquipSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0LL);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v33 = this->fields.userServantLeaderEntityList;
      if ( !v33 )
        goto LABEL_53;
      if ( v16 >= v33->max_length )
        goto LABEL_54;
      v34 = v33->m_Items[v16];
      ServantLeaderInfo = (__int64)FollowerInfo__getEquipTarget1(
                                     followerInfo,
                                     IndexForSupport,
                                     ReturnTypeByQuestId,
                                     0LL);
      if ( !v34 )
        goto LABEL_53;
      v34->fields.equipTarget1 = (struct EquipTargetInfo_o *)ServantLeaderInfo;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v34->fields.equipTarget1, ServantLeaderInfo, v35, v36);
      equipIdList = this->fields.equipIdList;
      oldEquipIdList = this->fields.oldEquipIdList;
      ServantLeaderInfo = FollowerInfo__getEquipUserSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0LL);
      if ( !oldEquipIdList )
        goto LABEL_53;
      if ( v16 >= oldEquipIdList->max_length )
        goto LABEL_54;
      oldEquipIdList->m_Items[v16] = ServantLeaderInfo;
      if ( !equipIdList )
        goto LABEL_53;
      if ( v16 >= equipIdList->max_length )
        goto LABEL_54;
    }
    else
    {
      v39 = this->fields.oldEquipIdList;
      if ( !v39 )
        goto LABEL_53;
      if ( v16 >= v39->max_length )
        goto LABEL_54;
      equipIdList = this->fields.equipIdList;
      v39->m_Items[v16] = 0LL;
      if ( !equipIdList )
        goto LABEL_53;
      if ( v16 >= equipIdList->max_length )
LABEL_54:
        sub_1BC326C(ServantLeaderInfo, v22, *(_QWORD *)&friendKind);
      ServantLeaderInfo = 0LL;
    }
    v40 = &equipIdList->obj.klass + v16++;
    v40[4] = (Il2CppClass *)ServantLeaderInfo;
  }
  if ( friendKind == 3 )
    v41 = 4;
  else
    v41 = 5;
  this->fields.isSelectServant = v47;
  this->fields.isFriendInfo = 1;
  this->fields.kind = v41;
  this->fields.eventSetupInfo2 = eventSetupInfo;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.eventSetupInfo2,
    (int32_t)eventSetupInfo,
    friendKind,
    (const MethodInfo *)isSelectServant);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.eventSetupInfo, (int32_t)eventSetupInfo, v42, v43);
  this->fields.questRestrictionInfo = v50;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)v50, v44, v45);
  if ( !followerInfo )
LABEL_53:
    sub_1BC3264(ServantLeaderInfo, v22);
  this->fields.pushUserServantId = followerInfo->fields.pushUserSvtId;
}


bool __fastcall SupportServantData__IsChangeDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  return System_String__op_Inequality(
           this->fields._oldDeckName_k__BackingField,
           this->fields._deckName_k__BackingField,
           0LL);
}


bool __fastcall SupportServantData__IsDefaultDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  System_String_o *deckName_k__BackingField; // x19
  System_String_o *DefaultDeckName; // x1

  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  DefaultDeckName = SupportServantData__getDefaultDeckName(this, method);
  return System_String__op_Equality(deckName_k__BackingField, DefaultDeckName, 0LL);
}


bool __fastcall SupportServantData__IsEmpty(SupportServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return !SupportServantData__getServantSum(this, method) && SupportServantData__getEquipSum(this, v3) == 0;
}


void __fastcall SupportServantData__ResetDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  struct System_String_o *DefaultDeckName; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  DefaultDeckName = SupportServantData__getDefaultDeckName(this, method);
  this->fields._deckName_k__BackingField = DefaultDeckName;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._deckName_k__BackingField, (int32_t)DefaultDeckName, v4, v5);
}


void __fastcall SupportServantData__ResetOld(SupportServantData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_String_o *deckName_k__BackingField; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  BalanceConfig_c *v8; // x0
  __int64 i; // x21
  unsigned __int64 v10; // x22
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9

  if ( (byte_4AFE757 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    byte_4AFE757 = 1;
  }
  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  this->fields._oldDeckName_k__BackingField = deckName_k__BackingField;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._oldDeckName_k__BackingField,
    (int32_t)deckName_k__BackingField,
    v2,
    v3);
  v8 = BalanceConfig_TypeInfo;
  for ( i = 4LL; ; ++i )
  {
    v10 = i - 4;
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v10 >= v8->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_17;
    if ( v10 >= servantIdList->max_length )
      goto LABEL_18;
    oldServantIdList = this->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_17;
    if ( v10 >= oldServantIdList->max_length )
      goto LABEL_18;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = *((_QWORD *)&servantIdList->obj.klass + i);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_17;
    if ( v10 >= equipIdList->max_length )
      goto LABEL_18;
    oldEquipIdList = this->fields.oldEquipIdList;
    if ( !oldEquipIdList )
LABEL_17:
      sub_1BC3264(v8, v6);
    if ( v10 >= oldEquipIdList->max_length )
LABEL_18:
      sub_1BC326C(v8, v6, v7);
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = *((_QWORD *)&equipIdList->obj.klass + i);
  }
}


void __fastcall SupportServantData__SetOld(
        SupportServantData_o *this,
        SupportServantData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SupportServantData_o *v5; // x20
  struct System_String_o *oldDeckName_k__BackingField; // x1
  __int64 v7; // x2
  __int64 i; // x22
  unsigned __int64 v9; // x23
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9

  v5 = this;
  if ( (byte_4AFE758 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_1BC3008(&BalanceConfig_TypeInfo, data);
    byte_4AFE758 = 1;
  }
  if ( !data )
LABEL_18:
    sub_1BC3264(this, data);
  oldDeckName_k__BackingField = data->fields._oldDeckName_k__BackingField;
  v5->fields._oldDeckName_k__BackingField = oldDeckName_k__BackingField;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&v5->fields._oldDeckName_k__BackingField,
    (int32_t)oldDeckName_k__BackingField,
    (int32_t)method,
    v3);
  this = (SupportServantData_o *)BalanceConfig_TypeInfo;
  for ( i = 4LL; ; ++i )
  {
    v9 = i - 4;
    if ( !LODWORD(this[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v9 >= SHIDWORD(this[1].fields.oldEquipIdList->m_Items[18]) )
      break;
    servantIdList = data->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_18;
    if ( v9 >= servantIdList->max_length )
      goto LABEL_19;
    oldServantIdList = v5->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_18;
    if ( v9 >= oldServantIdList->max_length )
      goto LABEL_19;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = *((_QWORD *)&servantIdList->obj.klass + i);
    equipIdList = data->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_18;
    if ( v9 >= equipIdList->max_length )
      goto LABEL_19;
    oldEquipIdList = v5->fields.oldEquipIdList;
    if ( !oldEquipIdList )
      goto LABEL_18;
    if ( v9 >= oldEquipIdList->max_length )
LABEL_19:
      sub_1BC326C(this, data, v7);
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = *((_QWORD *)&equipIdList->obj.klass + i);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SupportServantData__getClassName(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  SupportServantData_o *v4; // x20
  struct System_String_array *className; // x8
  System_String_o *v6; // x19

  v4 = this;
  if ( (byte_4AFE756 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_1BC3008(&LocalizationManager_TypeInfo, *(_QWORD *)&classPos);
    byte_4AFE756 = 1;
  }
  className = v4->fields.className;
  if ( !className )
    sub_1BC3264(this, *(_QWORD *)&classPos);
  if ( className->max_length <= classPos )
    sub_1BC326C(this, *(_QWORD *)&classPos, method);
  v6 = className->m_Items[classPos];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v6, 0LL);
}


System_String_o *__fastcall SupportServantData__getDefaultDeckName(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  Il2CppObject *v9; // x0
  int32_t deckId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4AFE749 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, method);
    sub_1BC3008(&LocalizationManager_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_12438/*"SUPPORT_SELECT_NAME_BASE"*/, v4);
    byte_4AFE749 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12438/*"SUPPORT_SELECT_NAME_BASE"*/, 0LL);
  deckId_k__BackingField = this->fields._deckId_k__BackingField;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deckId_k__BackingField, v6, v7, v8);
  return System_String__Format(v5, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantData__getEquip(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x8

  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    sub_1BC3264(this, classPos);
  if ( equipIdList->max_length <= classPos )
    sub_1BC326C(this, *(_QWORD *)&classPos, method);
  return equipIdList->m_Items[classPos];
}


int32_t __fastcall SupportServantData__getEquipSum(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  unsigned __int64 v5; // x22
  int32_t v6; // w20
  struct System_Int64_array *equipIdList; // x8

  if ( (byte_4AFE750 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    byte_4AFE750 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  v5 = 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v5 >= v4->static_fields->SupportDeckMemberMax )
      break;
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      sub_1BC3264(v4, method);
    if ( v5 >= equipIdList->max_length )
      sub_1BC326C(v4, method, v2);
    if ( equipIdList->m_Items[v5++] )
      ++v6;
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantData__getMember(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v4; // x8

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    sub_1BC3264(this, classPos);
  if ( userServantLeaderEntityList->max_length <= classPos )
    sub_1BC326C(this, *(_QWORD *)&classPos, method);
  v4 = userServantLeaderEntityList->m_Items[classPos];
  if ( v4 )
    return v4->fields.userSvtId;
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantData__getOldEquip(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct System_Int64_array *oldEquipIdList; // x8

  oldEquipIdList = this->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    sub_1BC3264(this, classPos);
  if ( oldEquipIdList->max_length <= classPos )
    sub_1BC326C(this, *(_QWORD *)&classPos, method);
  return oldEquipIdList->m_Items[classPos];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantData__getOldServant(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct System_Int64_array *oldServantIdList; // x8

  oldServantIdList = this->fields.oldServantIdList;
  if ( !oldServantIdList )
    sub_1BC3264(this, classPos);
  if ( oldServantIdList->max_length <= classPos )
    sub_1BC326C(this, *(_QWORD *)&classPos, method);
  return oldServantIdList->m_Items[classPos];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantData__getServant(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct System_Int64_array *servantIdList; // x8

  servantIdList = this->fields.servantIdList;
  if ( !servantIdList )
    sub_1BC3264(this, classPos);
  if ( servantIdList->max_length <= classPos )
    sub_1BC326C(this, *(_QWORD *)&classPos, method);
  return servantIdList->m_Items[classPos];
}


int32_t __fastcall SupportServantData__getServantSum(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  unsigned __int64 v5; // x22
  int32_t v6; // w20
  struct System_Int64_array *servantIdList; // x8

  if ( (byte_4AFE74F & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    byte_4AFE74F = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  v5 = 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v5 >= v4->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_1BC3264(v4, method);
    if ( v5 >= servantIdList->max_length )
      sub_1BC326C(v4, method, v2);
    if ( servantIdList->m_Items[v5++] )
      ++v6;
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
UserServantLeaderEntity_o *__fastcall SupportServantData__getUserServantLeaderEntity(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    sub_1BC3264(this, classPos);
  if ( userServantLeaderEntityList->max_length <= classPos )
    sub_1BC326C(this, *(_QWORD *)&classPos, method);
  return userServantLeaderEntityList->m_Items[classPos];
}


EventUpValSetupInfo_o *__fastcall SupportServantData__get_EventSetupInfo(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventSetupInfo;
}


EventUpValSetupInfo_o *__fastcall SupportServantData__get_EventSetupInfo2(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventSetupInfo2;
}


bool __fastcall SupportServantData__get_IsFriendInfo(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.isFriendInfo;
}


bool __fastcall SupportServantData__get_IsNoServant(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  signed int v5; // w9
  signed int v6; // w21
  int32_t SupportDeckMemberMax; // w8
  struct System_Int64_array *servantIdList; // x9
  bool v9; // cc

  if ( (byte_4AFE755 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    byte_4AFE755 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  v5 = 0;
  do
  {
    v6 = v5;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BalanceConfig_TypeInfo;
    }
    SupportDeckMemberMax = v4->static_fields->SupportDeckMemberMax;
    if ( v6 >= SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_1BC3264(v4, method);
    if ( v6 >= servantIdList->max_length )
      sub_1BC326C(v4, method, v2);
    v9 = servantIdList->m_Items[v6] <= 0;
    v5 = v6 + 1;
  }
  while ( v9 );
  return v6 >= SupportDeckMemberMax;
}


bool __fastcall SupportServantData__get_IsSelectServant(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.isSelectServant;
}


int32_t __fastcall SupportServantData__get_Kind(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.kind;
}


int64_t __fastcall SupportServantData__get_PushUserServantId(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.pushUserServantId;
}


QuestRestrictionInfo_o *__fastcall SupportServantData__get_QuestRestriction(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  return this->fields.questRestrictionInfo;
}


int32_t __fastcall SupportServantData__get_deckId(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields._deckId_k__BackingField;
}


System_String_o *__fastcall SupportServantData__get_deckName(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields._deckName_k__BackingField;
}


System_String_o *__fastcall SupportServantData__get_oldDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields._oldDeckName_k__BackingField;
}


bool __fastcall SupportServantData__isUseServant(
        SupportServantData_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  BalanceConfig_c *v5; // x0
  signed int v6; // w9
  signed int v7; // w22
  int32_t SupportDeckMemberMax; // w8
  struct System_Int64_array *servantIdList; // x9
  bool v10; // zf

  if ( (byte_4AFE751 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, userSvtId);
    byte_4AFE751 = 1;
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
      sub_1BC3264(v5, userSvtId);
    if ( v7 >= servantIdList->max_length )
      sub_1BC326C(v5, userSvtId, method);
    v10 = servantIdList->m_Items[v7] == userSvtId;
    v6 = v7 + 1;
  }
  while ( !v10 );
  return v7 < SupportDeckMemberMax;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__removeEquipData(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  int32_t v3; // w19
  SupportServantData_o *v4; // x20
  __int64 v5; // x1
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v7; // x8
  struct EquipTargetInfo_o *equipTarget1; // x22
  __int128 v9; // q1
  struct UserServantLeaderEntity_array *v10; // x8
  UserServantLeaderEntity_o *v11; // x8
  struct EquipTargetInfo_o *v12; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // kr00_16
  struct System_Int64_array *equipIdList; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15[2]; // [xsp+0h] [xbp-70h] BYREF

  v3 = classPos;
  v4 = this;
  if ( (byte_4AFE74E & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classPos);
    this = (SupportServantData_o *)sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4AFE74E = 1;
  }
  userServantLeaderEntityList = v4->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_19;
  if ( userServantLeaderEntityList->max_length <= v3 )
    goto LABEL_20;
  v7 = userServantLeaderEntityList->m_Items[v3];
  if ( !v7 )
    goto LABEL_19;
  equipTarget1 = v7->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v15, 0LL, 0LL);
  v9 = *(_OWORD *)&v15[0].fields.currentCryptoKey;
  v15[1] = v15[0];
  *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v15[0].fields.fakeValue;
  *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey = v9;
  v10 = v4->fields.userServantLeaderEntityList;
  if ( !v10 )
    goto LABEL_19;
  if ( v10->max_length <= v3 )
    goto LABEL_20;
  v11 = v10->m_Items[v3];
  if ( !v11 )
    goto LABEL_19;
  v12 = v11->fields.equipTarget1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  *(_QWORD *)&classPos = *(_QWORD *)&v13.fields.fakeValue;
  this = *(SupportServantData_o **)&v13.fields.currentCryptoKey;
  if ( !v12 )
LABEL_19:
    sub_1BC3264(this, *(_QWORD *)&classPos);
  v12->fields.svtId = v13;
LABEL_16:
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_19;
  if ( equipIdList->max_length <= v3 )
LABEL_20:
    sub_1BC326C(this, *(_QWORD *)&classPos, method);
  equipIdList->m_Items[v3] = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__removeServantData(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v4; // x9
  struct System_Int64_array *servantIdList; // x11

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_8;
  if ( userServantLeaderEntityList->max_length <= classPos )
    goto LABEL_9;
  v4 = userServantLeaderEntityList->m_Items[classPos];
  if ( !v4 || (v4->fields.userSvtId = 0LL, (servantIdList = this->fields.servantIdList) == 0LL) )
LABEL_8:
    sub_1BC3264(this, classPos);
  if ( servantIdList->max_length <= classPos
    || (servantIdList->m_Items[classPos] = 0LL, userServantLeaderEntityList->max_length <= classPos) )
  {
LABEL_9:
    sub_1BC326C(this, *(_QWORD *)&classPos, method);
  }
  v4->fields.svtId = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__setEquipData(
        SupportServantData_o *this,
        int32_t classPos,
        int64_t userSvtId,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v7; // w20
  SupportServantData_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x1
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v12; // x23
  CGThumbnailListItem_o *p_equipTarget1; // x23
  struct EquipTargetInfo_o *equipTarget1; // t1
  EquipTargetInfo_o *v15; // x24
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UserServantLeaderEntity_o *v18; // x8
  struct EquipTargetInfo_o *v19; // x23
  __int128 v20; // q1
  struct System_Int64_array *equipIdList; // x8
  struct UserServantLeaderEntity_array *v22; // x8
  UserServantLeaderEntity_o *v23; // x8
  struct EquipTargetInfo_o *v24; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-60h]

  v7 = classPos;
  v8 = this;
  if ( (byte_4AFE74D & 1) == 0 )
  {
    sub_1BC3008(&EquipTargetInfo_TypeInfo, *(_QWORD *)&classPos);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    this = (SupportServantData_o *)sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_4AFE74D = 1;
  }
  userServantLeaderEntityList = v8->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_24;
  if ( userServantLeaderEntityList->max_length <= v7 )
    goto LABEL_25;
  v12 = userServantLeaderEntityList->m_Items[v7];
  if ( !v12 )
    goto LABEL_24;
  equipTarget1 = v12->fields.equipTarget1;
  p_equipTarget1 = (CGThumbnailListItem_o *)&v12->fields.equipTarget1;
  if ( !equipTarget1 )
  {
    v15 = (EquipTargetInfo_o *)sub_1BC3254(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor(v15, 0LL);
    p_equipTarget1->klass = (CGThumbnailListItem_c *)v15;
    sub_1BC2FAC(p_equipTarget1, (int32_t)v15, v16, v17);
    userServantLeaderEntityList = v8->fields.userServantLeaderEntityList;
    if ( !userServantLeaderEntityList )
      goto LABEL_24;
  }
  if ( userServantLeaderEntityList->max_length <= v7 )
LABEL_25:
    sub_1BC326C(this, *(_QWORD *)&classPos, userSvtId);
  v18 = userServantLeaderEntityList->m_Items[v7];
  if ( !v18 )
    goto LABEL_24;
  v19 = v18->fields.equipTarget1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v26, userSvtId, 0LL);
  v27 = v26;
  if ( !v19 )
    goto LABEL_24;
  v20 = *(_OWORD *)&v27.fields.currentCryptoKey;
  *(_OWORD *)&v19->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v27.fields.fakeValue;
  *(_OWORD *)&v19->fields.userSvtId.fields.currentCryptoKey = v20;
  equipIdList = v8->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_24;
  if ( equipIdList->max_length <= v7 )
    goto LABEL_25;
  equipIdList->m_Items[v7] = userSvtId;
  if ( (svtId & 0x80000000) != 0 )
    return;
  v22 = v8->fields.userServantLeaderEntityList;
  if ( !v22 )
LABEL_24:
    sub_1BC3264(this, *(_QWORD *)&classPos);
  if ( v22->max_length <= v7 )
    goto LABEL_25;
  v23 = v22->m_Items[v7];
  if ( !v23 )
    goto LABEL_24;
  v24 = v23->fields.equipTarget1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  *(_QWORD *)&classPos = *(_QWORD *)&v25.fields.fakeValue;
  this = *(SupportServantData_o **)&v25.fields.currentCryptoKey;
  if ( !v24 )
    goto LABEL_24;
  v24->fields.svtId = v25;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__setServantData(
        SupportServantData_o *this,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  SupportServantData_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x25
  Il2CppClass **v11; // x22
  CGThumbnailListItem_o *v12; // x22
  Il2CppClass *v13; // t1
  UserServantLeaderEntity_o *v14; // x23
  const MethodInfo *v15; // x3
  struct UserServantLeaderEntity_array *v16; // x8
  __int128 v17; // q0
  __int128 v18; // q1
  struct System_Int64_array *servantIdList; // x20
  __int64 v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-60h]

  v6 = this;
  if ( (byte_4AFE74C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, *(_QWORD *)&classPos);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    this = (SupportServantData_o *)sub_1BC3008(&UserServantLeaderEntity_TypeInfo, v9);
    byte_4AFE74C = 1;
  }
  userServantLeaderEntityList = v6->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_20;
  if ( userServantLeaderEntityList->max_length <= classPos )
    goto LABEL_21;
  v11 = &userServantLeaderEntityList->obj.klass + classPos;
  v13 = v11[4];
  v12 = (CGThumbnailListItem_o *)(v11 + 4);
  if ( !v13 )
  {
    v14 = (UserServantLeaderEntity_o *)sub_1BC3254(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v14, 0LL);
    if ( v14 )
    {
      this = (SupportServantData_o *)sub_1BC3144(v14, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !this )
      {
        v20 = sub_1BC3288();
        sub_1BC3130(v20, 0LL);
      }
    }
    if ( userServantLeaderEntityList->max_length <= classPos )
LABEL_21:
      sub_1BC326C(this, *(_QWORD *)&classPos, entity);
    v12->klass = (CGThumbnailListItem_c *)v14;
    sub_1BC2FAC(v12, (int32_t)v14, (int32_t)entity, v15);
  }
  this = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_20;
  this = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)this,
                                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  v16 = v6->fields.userServantLeaderEntityList;
  if ( !v16 )
    goto LABEL_20;
  if ( v16->max_length <= classPos )
    goto LABEL_21;
  this = (SupportServantData_o *)v16->m_Items[classPos];
  if ( !this )
    goto LABEL_20;
  UserServantLeaderEntity__setUserServantEntity(
    (UserServantLeaderEntity_o *)this,
    entity,
    classPos,
    v6->fields._deckId_k__BackingField,
    0LL);
  if ( !entity )
    goto LABEL_20;
  v17 = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  v18 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  servantIdList = v6->fields.servantIdList;
  *(_OWORD *)&v22.fields.currentCryptoKey = v17;
  *(_OWORD *)&v22.fields.fakeValue = v18;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v21 = v22;
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v21, 0LL);
  if ( !servantIdList )
LABEL_20:
    sub_1BC3264(this, *(_QWORD *)&classPos);
  if ( servantIdList->max_length <= classPos )
    goto LABEL_21;
  servantIdList->m_Items[classPos] = (int64_t)this;
}


void __fastcall SupportServantData__set_EventSetupInfo(
        SupportServantData_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.eventSetupInfo = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.eventSetupInfo, (int32_t)value, (int32_t)method, v3);
}


void __fastcall SupportServantData__set_PushUserServantId(
        SupportServantData_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields.pushUserServantId = value;
}


void __fastcall SupportServantData__set_deckId(SupportServantData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._deckId_k__BackingField = value;
}


void __fastcall SupportServantData__set_deckName(
        SupportServantData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._deckName_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._deckName_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall SupportServantData__set_oldDeckName(
        SupportServantData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._oldDeckName_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._oldDeckName_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SupportServantData__updateCheck(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  SupportServantData_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x10
  struct System_Int64_array *oldEquipIdList; // x11
  const MethodInfo *v15; // x3
  SupportServantData_o *v16; // x20
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct System_Int64_array *v24; // x8
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  struct System_Int64_array *v28; // x8
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  int32_t deckId_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  unsigned int v33; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  v33 = classPos;
  if ( (byte_4AFE753 & 1) == 0 )
  {
    sub_1BC3008(&string___TypeInfo, *(_QWORD *)&classPos);
    sub_1BC3008(&StringLiteral_846/*",\"userSvtId\":"*/, v5);
    sub_1BC3008(&StringLiteral_25016/*"}"*/, v6);
    sub_1BC3008(&StringLiteral_842/*",\"classId\":"*/, v7);
    sub_1BC3008(&StringLiteral_845/*",\"userSvtEquipId\":"*/, v8);
    this = (SupportServantData_o *)sub_1BC3008(&StringLiteral_24799/*"{\"supportDeckId\":"*/, v9);
    byte_4AFE753 = 1;
  }
  servantIdList = v4->fields.servantIdList;
  if ( !servantIdList )
    goto LABEL_31;
  if ( servantIdList->max_length <= classPos )
    goto LABEL_30;
  oldServantIdList = v4->fields.oldServantIdList;
  if ( !oldServantIdList )
    goto LABEL_31;
  if ( oldServantIdList->max_length <= classPos )
    goto LABEL_30;
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_31;
  if ( equipIdList->max_length <= classPos )
    goto LABEL_30;
  oldEquipIdList = v4->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    goto LABEL_31;
  if ( oldEquipIdList->max_length <= classPos )
    goto LABEL_30;
  if ( servantIdList->m_Items[classPos] == oldServantIdList->m_Items[classPos]
    && equipIdList->m_Items[classPos] == oldEquipIdList->m_Items[classPos] )
  {
    return 0LL;
  }
  this = (SupportServantData_o *)sub_1BC30B0(string___TypeInfo, 9LL);
  if ( !this )
    goto LABEL_31;
  v16 = this;
  if ( !LODWORD(this->fields.servantIdList) )
    goto LABEL_30;
  v17 = StringLiteral_24799/*"{\"supportDeckId\":"*/;
  this->fields.oldServantIdList = (struct System_Int64_array *)StringLiteral_24799/*"{\"supportDeckId\":"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.oldServantIdList, v17, (int32_t)method, v15);
  deckId_k__BackingField = v4->fields._deckId_k__BackingField;
  this = (SupportServantData_o *)System_Int32__ToString((int32_t)&deckId_k__BackingField, 0LL);
  if ( LODWORD(v16->fields.servantIdList) <= 1 )
    goto LABEL_30;
  v16->fields.equipIdList = (struct System_Int64_array *)this;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v16->fields.equipIdList, (int32_t)this, (int32_t)method, v18);
  if ( LODWORD(v16->fields.servantIdList) <= 2 )
    goto LABEL_30;
  v20 = StringLiteral_842/*",\"classId\":"*/;
  v16->fields.oldEquipIdList = (struct System_Int64_array *)StringLiteral_842/*",\"classId\":"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v16->fields.oldEquipIdList, v20, (int32_t)method, v19);
  this = (SupportServantData_o *)System_Int32__ToString((int32_t)&v33, 0LL);
  if ( LODWORD(v16->fields.servantIdList) <= 3 )
    goto LABEL_30;
  v16->fields.className = (struct System_String_array *)this;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v16->fields.className, (int32_t)this, (int32_t)method, v21);
  if ( LODWORD(v16->fields.servantIdList) <= 4 )
    goto LABEL_30;
  v23 = StringLiteral_846/*",\"userSvtId\":"*/;
  *(_QWORD *)&v16->fields.isFriendInfo = StringLiteral_846/*",\"userSvtId\":"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v16->fields.isFriendInfo, v23, (int32_t)method, v22);
  v24 = v4->fields.servantIdList;
  if ( !v24 )
    goto LABEL_31;
  if ( v33 >= v24->max_length
    || (this = (SupportServantData_o *)System_Int64__ToString((int64_t)&v24->m_Items[v33], 0LL),
        LODWORD(v16->fields.servantIdList) <= 5)
    || (*(_QWORD *)&v16->fields.isSelectServant = this,
        sub_1BC2FAC((CGThumbnailListItem_o *)&v16->fields.isSelectServant, (int32_t)this, (int32_t)method, v25),
        LODWORD(v16->fields.servantIdList) <= 6) )
  {
LABEL_30:
    sub_1BC326C(this, *(_QWORD *)&classPos, method);
  }
  v27 = StringLiteral_845/*",\"userSvtEquipId\":"*/;
  v16->fields.eventSetupInfo = (struct EventUpValSetupInfo_o *)StringLiteral_845/*",\"userSvtEquipId\":"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v16->fields.eventSetupInfo, v27, (int32_t)method, v26);
  v28 = v4->fields.equipIdList;
  if ( !v28 )
LABEL_31:
    sub_1BC3264(this, *(_QWORD *)&classPos);
  if ( v33 >= v28->max_length )
    goto LABEL_30;
  this = (SupportServantData_o *)System_Int64__ToString((int64_t)&v28->m_Items[v33], 0LL);
  if ( LODWORD(v16->fields.servantIdList) <= 7 )
    goto LABEL_30;
  v16->fields.eventSetupInfo2 = (struct EventUpValSetupInfo_o *)this;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v16->fields.eventSetupInfo2, (int32_t)this, (int32_t)method, v29);
  if ( LODWORD(v16->fields.servantIdList) <= 8 )
    goto LABEL_30;
  v31 = StringLiteral_25016/*"}"*/;
  v16->fields.questRestrictionInfo = (struct QuestRestrictionInfo_o *)StringLiteral_25016/*"}"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v16->fields.questRestrictionInfo, v31, (int32_t)method, v30);
  return System_String__Concat_62389164((System_String_array *)v16, 0LL);
}


System_String_o *__fastcall SupportServantData__updateNameCheck(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  bool v6; // w8
  System_String_o *result; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  System_String_o *v12; // x20
  int32_t v13; // w1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  const MethodInfo *v17; // x3
  struct System_String_o *deckName_k__BackingField; // x1
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t deckId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4AFE754 & 1) == 0 )
  {
    sub_1BC3008(&string___TypeInfo, method);
    sub_1BC3008(&StringLiteral_24799/*"{\"supportDeckId\":"*/, v3);
    sub_1BC3008(&StringLiteral_843/*",\"name\":\""*/, v4);
    sub_1BC3008(&StringLiteral_366/*"\"}"*/, v5);
    byte_4AFE754 = 1;
  }
  v6 = System_String__op_Inequality(
         this->fields._deckName_k__BackingField,
         this->fields._oldDeckName_k__BackingField,
         0LL);
  result = 0LL;
  if ( v6 )
  {
    v8 = (System_String_o *)sub_1BC30B0(string___TypeInfo, 5LL);
    if ( !v8 )
      sub_1BC3264(0LL, v9);
    v12 = v8;
    if ( !LODWORD(v8[1].klass) )
      goto LABEL_12;
    v13 = StringLiteral_24799/*"{\"supportDeckId\":"*/;
    v8[1].monitor = (void *)StringLiteral_24799/*"{\"supportDeckId\":"*/;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v8[1].monitor, v13, v10, v11);
    deckId_k__BackingField = this->fields._deckId_k__BackingField;
    v8 = System_Int32__ToString((int32_t)&deckId_k__BackingField, 0LL);
    if ( LODWORD(v12[1].klass) <= 1 )
      goto LABEL_12;
    v12[1].fields = (System_String_Fields)v8;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v12[1].fields, (int32_t)v8, v10, v14);
    if ( LODWORD(v12[1].klass) <= 2
      || (v16 = StringLiteral_843/*",\"name\":\""*/,
          v12[2].klass = (System_String_c *)StringLiteral_843/*",\"name\":\""*/,
          sub_1BC2FAC((CGThumbnailListItem_o *)&v12[2], v16, v10, v15),
          LODWORD(v12[1].klass) <= 3)
      || (deckName_k__BackingField = this->fields._deckName_k__BackingField,
          v12[2].monitor = deckName_k__BackingField,
          sub_1BC2FAC((CGThumbnailListItem_o *)&v12[2].monitor, (int32_t)deckName_k__BackingField, v10, v17),
          LODWORD(v12[1].klass) <= 4) )
    {
LABEL_12:
      sub_1BC326C(v8, v9, v10);
    }
    v20 = StringLiteral_366/*"\"}"*/;
    v12[2].fields = (System_String_Fields)StringLiteral_366/*"\"}"*/;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v12[2].fields, v20, v10, v19);
    return System_String__Concat_62389164((System_String_array *)v12, 0LL);
  }
  return result;
}


void __fastcall SupportServantData_FollowerData___ctor(
        SupportServantData_FollowerData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}