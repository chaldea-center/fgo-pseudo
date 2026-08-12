void RestrictionNotSatisfyWholeInfo___ctor(RestrictionNotSatisfyWholeInfo_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *RestrictionNotSatisfyWholeInfo__AddColorCodeAndFixMessage(
        RestrictionNotSatisfyWholeInfo_o *this,
        System_String_o *message,
        bool isAddFixMessage,
        const MethodInfo *method)
{
  System_String_o *v6; // x0

  if ( (byte_596C299 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_16447/*"[-]"*/);
    sub_2213A60(&StringLiteral_11586/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_2213A60(&StringLiteral_16548/*"[FFFF00]"*/);
    byte_596C299 = 1;
  }
  if ( !isAddFixMessage )
    return System_String__Concat_75694928(
             (System_String_o *)StringLiteral_16548/*"[FFFF00]"*/,
             message,
             (System_String_o *)StringLiteral_16447/*"[-]"*/,
             0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, message, isAddFixMessage);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11586/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0);
  return System_String__Concat_75696856(
           (System_String_o *)StringLiteral_16548/*"[FFFF00]"*/,
           message,
           v6,
           (System_String_o *)StringLiteral_16447/*"[-]"*/,
           0);
}


void RestrictionNotSatisfyWholeInfo__Awake(RestrictionNotSatisfyWholeInfo_o *this, const MethodInfo *method)
{
  ;
}


bool RestrictionNotSatisfyWholeInfo__Init(
        RestrictionNotSatisfyWholeInfo_o *this,
        RestrictionWholeEntity_o *restrictionWholeEntity,
        PartyListViewItem_o *partyItem,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  RestrictionNotSatisfyWholeInfo_o *v7; // x19
  int32_t type; // w8
  bool result; // w0
  int32_t v10; // w24
  int v11; // w25
  int32_t m; // w22
  BalanceConfig_c *v13; // x0
  int32_t v14; // w29
  bool v15; // w26
  PartyOrganizationListViewItem_o *v16; // x24
  ServantEntity_o *v17; // x23
  int32_t v18; // w25
  System_Int32_array *v19; // x0
  int v20; // w23
  int32_t v21; // w24
  char v22; // w25
  int32_t k; // w22
  BalanceConfig_c *v24; // x0
  int32_t DeckMemberMax; // w28
  PartyOrganizationListViewItem_o *v26; // x24
  struct System_Int32_array *targetVals2; // x8
  ServantEntity_o *v28; // x23
  int32_t v29; // w25
  System_Int32_array *v30; // x0
  char v31; // w23
  int32_t v32; // w8
  int32_t v33; // w22
  int32_t v34; // w24
  int32_t v35; // w8
  const MethodInfo *v36; // x3
  RestrictionNotSatisfyWholeInfo_o *v37; // x2
  char v38; // w8
  int32_t i; // w22
  int32_t v40; // w22
  char v41; // w24
  int32_t v42; // w28
  PartyOrganizationListViewItem_o *v43; // x23
  ServantEntity_o *v44; // x24
  int32_t v45; // w25
  System_Int32_array *v46; // x0
  int32_t v47; // w8
  System_String_o *v48; // x2
  const MethodInfo *v49; // x3
  RestrictionNotSatisfyWholeInfo_o *v50; // x0
  bool v51; // w1
  System_String_o *v52; // x0
  const MethodInfo *v53; // x3
  int32_t v54; // w24
  BalanceConfig_c *v55; // x0
  PartyOrganizationListViewItem_o *v56; // x24
  ServantEntity_o *v57; // x23
  int32_t v58; // w25
  System_Int32_array *v59; // x0
  bool v60; // cc
  bool v61; // w20
  const MethodInfo *v62; // x3
  int32_t j; // w23
  int32_t v64; // w28
  bool v65; // w22
  PartyOrganizationListViewItem_o *v66; // x24
  ServantEntity_o *ServantEntity_k__BackingField; // x25
  int32_t svtLimitCount; // w26
  System_Int32_array *Individuality; // x0

  v7 = this;
  if ( (byte_596C293 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    this = (RestrictionNotSatisfyWholeInfo_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C293 = 1;
  }
  if ( !restrictionWholeEntity )
    goto LABEL_145;
  type = restrictionWholeEntity->fields.type;
  result = 1;
  if ( type > 5 )
  {
    if ( type > 8 )
    {
      if ( type == 9 )
      {
        v47 = 0;
        while ( 1 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          v33 = v47;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionWholeEntity, partyItem);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          v34 = *(_DWORD *)(*((_QWORD *)this + 23) + 172LL);
          v15 = v33 >= v34;
          if ( v33 >= v34 )
            break;
          if ( !partyItem )
            goto LABEL_145;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v33, 0);
          if ( !this )
            goto LABEL_145;
          v47 = v33 + 1;
          if ( *((_BYTE *)this + 235) )
            goto LABEL_93;
        }
      }
      else
      {
        if ( type != 10 )
          return result;
        v35 = 0;
        while ( 1 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          v33 = v35;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionWholeEntity, partyItem);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          v34 = *(_DWORD *)(*((_QWORD *)this + 23) + 172LL);
          v15 = v33 >= v34;
          if ( v33 >= v34 )
            break;
          if ( !partyItem )
            goto LABEL_145;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v33, 0);
          if ( !this )
            goto LABEL_145;
          if ( !*((_BYTE *)this + 354) )
          {
            v35 = v33 + 1;
            if ( *((int *)this + 89) <= 0 )
              continue;
          }
          goto LABEL_93;
        }
      }
      goto LABEL_93;
    }
    if ( (unsigned int)(type - 6) >= 2 )
    {
      if ( type != 8 )
        return result;
      for ( i = 0; ; ++i )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionWholeEntity, partyItem);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( i >= *(_DWORD *)(*((_QWORD *)this + 23) + 172LL) )
          break;
        if ( !partyItem )
          goto LABEL_145;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, i, 0);
        if ( !this )
          goto LABEL_145;
        if ( *((_BYTE *)this + 237) && *((_BYTE *)this + 259) )
        {
          v15 = 0;
          v65 = 1;
          goto LABEL_138;
        }
      }
      for ( j = 0; ; ++j )
      {
        if ( !*((_DWORD *)this + 57) )
        {
          j_il2cpp_runtime_class_init_0(this, restrictionWholeEntity, partyItem);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v64 = *(_DWORD *)(*((_QWORD *)this + 23) + 176LL);
        v65 = j >= v64;
        if ( j >= v64 )
          break;
        if ( !partyItem )
          goto LABEL_145;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, j, 0);
        if ( !this )
          goto LABEL_145;
        v66 = (PartyOrganizationListViewItem_o *)this;
        if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0) )
        {
          ServantEntity_k__BackingField = v66->fields._ServantEntity_k__BackingField;
          svtLimitCount = v66->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v66, 0);
          if ( !ServantEntity_k__BackingField )
            goto LABEL_145;
          Individuality = ServantEntity__getIndividuality(
                            ServantEntity_k__BackingField,
                            svtLimitCount,
                            (int32_t)this,
                            0);
          if ( RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, Individuality, 0) )
            break;
        }
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
      }
      v15 = j < v64;
LABEL_138:
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
      if ( !this )
        goto LABEL_145;
      v48 = System_String__Replace_75703400(
              (System_String_o *)this,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0);
      v50 = v7;
      v51 = v65;
      goto LABEL_140;
    }
    v21 = 0;
    v22 = 1;
    while ( 1 )
    {
      for ( k = v21; ; ++k )
      {
        v24 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionWholeEntity, partyItem);
          v24 = BalanceConfig_TypeInfo;
        }
        DeckMemberMax = v24->static_fields->DeckMemberMax;
        if ( k >= DeckMemberMax )
        {
          v31 = v22;
          goto LABEL_62;
        }
        this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                     k + 1,
                                                     (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !partyItem )
            goto LABEL_145;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, k, 0);
          if ( !this )
            goto LABEL_145;
          v26 = (PartyOrganizationListViewItem_o *)this;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                       (PartyOrganizationListViewItem_o *)this,
                                                       0);
          if ( ((unsigned __int8)this & 1) == 0 )
            break;
        }
      }
      targetVals2 = restrictionWholeEntity->fields.targetVals2;
      if ( !targetVals2 )
        goto LABEL_145;
      if ( LODWORD(targetVals2->max_length) == 1 && !v26->fields.isFollower )
        break;
      v28 = v26->fields._ServantEntity_k__BackingField;
      v29 = v26->fields.svtLimitCount;
      this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v26, 0);
      if ( !v28 )
        goto LABEL_145;
      v21 = k + 1;
      v30 = ServantEntity__getIndividuality(v28, v29, (int32_t)this, 0);
      v22 = 0;
      v31 = 0;
      if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v30, 0) )
        goto LABEL_62;
    }
    v31 = 0;
LABEL_62:
    this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
    v15 = k >= DeckMemberMax;
    if ( !this )
      goto LABEL_145;
    this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_75703400(
                                                 (System_String_o *)this,
                                                 (System_String_o *)StringLiteral_43/*"\n"*/,
                                                 (System_String_o *)StringLiteral_1/*""*/,
                                                 0);
    if ( !v7 )
      goto LABEL_145;
    v37 = this;
    v38 = (k < DeckMemberMax) | v31;
LABEL_124:
    RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, v38 & 1, (System_String_o *)v37, v36);
    if ( (v31 & 1) != 0 )
      return 1;
    return !v15;
  }
  if ( type <= 2 )
  {
    if ( type != 1 )
    {
      if ( type != 2 )
        return result;
      v32 = 0;
      do
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        v33 = v32;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionWholeEntity, partyItem);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v34 = *(_DWORD *)(*((_QWORD *)this + 23) + 172LL);
        v15 = v33 >= v34;
        if ( v33 >= v34 )
          break;
        if ( !partyItem )
          goto LABEL_145;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v33, 0);
        if ( !this )
          goto LABEL_145;
        v32 = v33 + 1;
      }
      while ( !*((_BYTE *)this + 353) );
LABEL_93:
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
      if ( !this )
        goto LABEL_145;
      v48 = System_String__Replace_75703400(
              (System_String_o *)this,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0);
      v50 = v7;
      v51 = v33 < v34;
LABEL_140:
      RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v50, v51, v48, v49);
      return !v15;
    }
    v40 = 0;
    v41 = 1;
    while ( 1 )
    {
      this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionWholeEntity, partyItem);
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
      }
      v42 = *(_DWORD *)(*((_QWORD *)this + 23) + 172LL);
      v15 = v40 >= v42;
      if ( v40 >= v42 )
        break;
      if ( !partyItem )
        goto LABEL_145;
      this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v40, 0);
      if ( !this )
        goto LABEL_145;
      v43 = (PartyOrganizationListViewItem_o *)this;
      if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0) )
      {
        v44 = v43->fields._ServantEntity_k__BackingField;
        v45 = v43->fields.svtLimitCount;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v43, 0);
        if ( !v44 )
          goto LABEL_145;
        v46 = ServantEntity__getIndividuality(v44, v45, (int32_t)this, 0);
        v41 = 0;
        v31 = 0;
        if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v46, 0) )
          goto LABEL_121;
      }
      ++v40;
    }
    v31 = v41;
LABEL_121:
    this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
    if ( !this )
      goto LABEL_145;
    this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_75703400(
                                                 (System_String_o *)this,
                                                 (System_String_o *)StringLiteral_43/*"\n"*/,
                                                 (System_String_o *)StringLiteral_1/*""*/,
                                                 0);
    if ( !v7 )
      goto LABEL_145;
    v37 = this;
    v38 = v31 | (v40 < v42);
    goto LABEL_124;
  }
  if ( type != 3 )
  {
    if ( type == 4 )
    {
      v54 = 0;
      v11 = 1;
      while ( 1 )
      {
        for ( m = v54; ; ++m )
        {
          v55 = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionWholeEntity, partyItem);
            v55 = BalanceConfig_TypeInfo;
          }
          v14 = v55->static_fields->DeckMemberMax;
          v15 = m >= v14;
          if ( m >= v14 )
          {
LABEL_110:
            v20 = v11;
            goto LABEL_111;
          }
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       m + 1,
                                                       (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_145;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, m, 0);
            if ( !this )
              goto LABEL_145;
            v56 = (PartyOrganizationListViewItem_o *)this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0) )
              break;
          }
        }
        v57 = v56->fields._ServantEntity_k__BackingField;
        v58 = v56->fields.svtLimitCount;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v56, 0);
        if ( !v57 )
          break;
        v54 = m + 1;
        v59 = ServantEntity__getIndividuality(v57, v58, (int32_t)this, 0);
        v11 = 0;
        v20 = 0;
        if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v59, 0) )
          goto LABEL_111;
      }
    }
    else
    {
      v10 = 0;
      v11 = 1;
      while ( 1 )
      {
        for ( m = v10; ; ++m )
        {
          v13 = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionWholeEntity, partyItem);
            v13 = BalanceConfig_TypeInfo;
          }
          v14 = v13->static_fields->DeckMemberMax;
          v15 = m >= v14;
          if ( m >= v14 )
            goto LABEL_110;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       m + 1,
                                                       (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_145;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, m, 0);
            if ( !this )
              goto LABEL_145;
            v16 = (PartyOrganizationListViewItem_o *)this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0) )
              break;
          }
        }
        if ( v16->fields.isFollower )
          break;
        v17 = v16->fields._ServantEntity_k__BackingField;
        v18 = v16->fields.svtLimitCount;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v16, 0);
        if ( !v17 )
          goto LABEL_145;
        v10 = m + 1;
        v19 = ServantEntity__getIndividuality(v17, v18, (int32_t)this, 0);
        v11 = 0;
        v20 = 0;
        if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v19, 0) )
          goto LABEL_111;
      }
      v20 = 0;
LABEL_111:
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
      if ( v20 )
        v60 = 1;
      else
        v60 = m < v14;
      v61 = v60;
      if ( this )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_75703400(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_43/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0);
        if ( v7 )
        {
          RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, v61, (System_String_o *)this, v62);
          if ( !v20 )
            return !v15;
          return 1;
        }
      }
    }
LABEL_145:
    sub_2213CDC(this, restrictionWholeEntity);
  }
  this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
  if ( !this )
    goto LABEL_145;
  v52 = System_String__Replace_75703400(
          (System_String_o *)this,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0);
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, 0, v52, v53);
  v15 = 1;
  return !v15;
}


bool RestrictionNotSatisfyWholeInfo__InitFatigue(
        RestrictionNotSatisfyWholeInfo_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  int32_t v5; // w8
  System_String_o *Member; // x0
  int32_t v7; // w21
  int32_t v8; // w27
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3

  if ( (byte_596C295 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_11582/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C295 = 1;
  }
  v5 = 0;
  do
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    v7 = v5;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, partyItem, method);
      Member = (System_String_o *)BalanceConfig_TypeInfo;
    }
    v8 = *(_DWORD *)(*(_QWORD *)&Member[7].fields + 172LL);
    if ( v7 >= v8 )
      break;
    if ( !partyItem )
      goto LABEL_14;
    Member = (System_String_o *)PartyListViewItem__GetMember(partyItem, v7, 0);
    if ( !Member )
      goto LABEL_14;
    v5 = v7 + 1;
  }
  while ( ((unsigned __int64)Member[11].klass & 0x8000000000000000LL) != 0 );
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, partyItem, method);
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_11582/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0);
  if ( !Member )
LABEL_14:
    sub_2213CDC(Member, partyItem);
  v9 = System_String__Replace_75703400(
         Member,
         (System_String_o *)StringLiteral_43/*"\n"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0);
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v7 < v8, v9, v10);
  return v7 < v8;
}


bool RestrictionNotSatisfyWholeInfo__InitNotSingleSupportOnly(
        RestrictionNotSatisfyWholeInfo_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  int32_t v5; // w8
  System_String_o *Member; // x0
  int32_t v7; // w21
  int32_t v8; // w27
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3

  if ( (byte_596C296 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_10679/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C296 = 1;
  }
  v5 = 0;
  do
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    v7 = v5;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, partyItem, method);
      Member = (System_String_o *)BalanceConfig_TypeInfo;
    }
    v8 = *(_DWORD *)(*(_QWORD *)&Member[7].fields + 172LL);
    if ( v7 >= v8 )
      break;
    if ( !partyItem )
      goto LABEL_14;
    Member = (System_String_o *)PartyListViewItem__GetMember(partyItem, v7, 0);
    if ( !Member )
      goto LABEL_14;
    v5 = v7 + 1;
  }
  while ( !LOBYTE(Member[15].klass) );
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, partyItem, method);
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_10679/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
  if ( !Member )
LABEL_14:
    sub_2213CDC(Member, partyItem);
  v9 = System_String__Replace_75703400(
         Member,
         (System_String_o *)StringLiteral_43/*"\n"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0);
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v7 < v8, v9, v10);
  return v7 < v8;
}


bool RestrictionNotSatisfyWholeInfo__InitUniqueServant(
        RestrictionNotSatisfyWholeInfo_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  int32_t v5; // w8
  System_String_o *Member; // x0
  int32_t v7; // w21
  int32_t v8; // w27
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3

  if ( (byte_596C294 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_11585/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C294 = 1;
  }
  v5 = 0;
  do
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    v7 = v5;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, partyItem, method);
      Member = (System_String_o *)BalanceConfig_TypeInfo;
    }
    v8 = *(_DWORD *)(*(_QWORD *)&Member[7].fields + 172LL);
    if ( v7 >= v8 )
      break;
    if ( !partyItem )
      goto LABEL_14;
    Member = (System_String_o *)PartyListViewItem__GetMember(partyItem, v7, 0);
    if ( !Member )
      goto LABEL_14;
    v5 = v7 + 1;
  }
  while ( !BYTE2(Member[9].fields._stringLength) );
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, partyItem, method);
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_11585/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0);
  if ( !Member )
LABEL_14:
    sub_2213CDC(Member, partyItem);
  v9 = System_String__Replace_75703400(
         Member,
         (System_String_o *)StringLiteral_43/*"\n"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0);
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v7 < v8, v9, v10);
  return v7 < v8;
}


bool RestrictionNotSatisfyWholeInfo__Init_41354868(
        RestrictionNotSatisfyWholeInfo_o *this,
        RestrictionEntity_o *restrictionEntity,
        PartyListViewItem_o *partyItem,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  RestrictionNotSatisfyWholeInfo_o *v8; // x19
  char v9; // w8
  struct System_Int32_array *targetVals2; // x8
  System_String_o *name; // x8
  char v12; // w20
  char IsSearchVals_49612428; // w22
  System_String_o *v14; // x2
  const MethodInfo *v15; // x3
  bool v16; // w1
  RestrictionNotSatisfyWholeInfo_o *v17; // x0
  int32_t v18; // w22
  int32_t v19; // w8
  int32_t v20; // w23
  int32_t v21; // w25
  PartyOrganizationListViewItem_o *v22; // x22
  bool IsEmpty; // w21
  char v24; // w23
  const MethodInfo *v25; // x3
  int32_t v26; // w8
  int32_t v27; // w23
  int v28; // w24
  int32_t v29; // w22
  char v30; // w24
  PartyOrganizationListViewItem_o *v31; // x23
  ServantEntity_o *v32; // x24
  int32_t v33; // w25
  System_Int32_array *v34; // x0
  int32_t v35; // w23
  char v36; // w25
  int32_t v37; // w28
  PartyOrganizationListViewItem_o *v38; // x24
  ServantEntity_o *ServantEntity_k__BackingField; // x25
  int32_t svtLimitCount; // w26
  System_Int32_array *Individuality; // x0
  int32_t v42; // w22
  int v43; // w25
  BalanceConfig_c *v44; // x0
  RestrictionNotSatisfyWholeInfo_o *v45; // x24
  struct System_Int32_array *targetVals; // x8
  int max_length; // w10
  bool v48; // w8
  bool v49; // w20
  const MethodInfo *v50; // x3
  int32_t v51; // w8
  int32_t v52; // w22
  RestrictionNotSatisfyWholeInfo_o *v53; // x23
  int32_t v54; // w8
  struct System_Int32_array *v55; // x8
  _BOOL4 v56; // w21
  const MethodInfo *v57; // x3
  RestrictionNotSatisfyWholeInfo_o *v58; // x2
  char v59; // w8
  int32_t i; // w22
  int32_t v61; // w28
  bool v62; // w23
  PartyOrganizationListViewItem_o *v63; // x24
  ServantEntity_o *v64; // x25
  int32_t v65; // w26
  System_Int32_array *v66; // x0
  char v68; // w21
  ServantEntity_o *v69; // x23
  int32_t v70; // w24
  System_Int32_array *v71; // x0

  v8 = this;
  if ( (byte_596C297 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    this = (RestrictionNotSatisfyWholeInfo_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C297 = 1;
  }
  if ( restrictionEntity )
  {
    v9 = 1;
    switch ( restrictionEntity->fields.type )
    {
      case 1:
        v35 = 0;
        v36 = 1;
LABEL_65:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity, partyItem);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v37 = *(_DWORD *)(*((_QWORD *)this + 23) + 172LL);
        IsSearchVals_49612428 = v35 >= v37;
        if ( v35 < v37 )
        {
          if ( !partyItem )
            break;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v35, 0);
          if ( !this )
            break;
          v38 = (PartyOrganizationListViewItem_o *)this;
          if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0) )
            goto LABEL_74;
          ServantEntity_k__BackingField = v38->fields._ServantEntity_k__BackingField;
          svtLimitCount = v38->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v38, 0);
          if ( !ServantEntity_k__BackingField )
            break;
          Individuality = ServantEntity__getIndividuality(
                            ServantEntity_k__BackingField,
                            svtLimitCount,
                            (int32_t)this,
                            0);
          v36 = 0;
          v30 = 0;
          if ( !RestrictionEntity__IsRestriction_49612832(restrictionEntity, Individuality, 0) )
          {
LABEL_74:
            ++v35;
            goto LABEL_65;
          }
        }
        else
        {
          v30 = v36;
        }
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
        if ( this )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_75703400(
                                                       (System_String_o *)this,
                                                       (System_String_o *)StringLiteral_43/*"\n"*/,
                                                       (System_String_o *)StringLiteral_1/*""*/,
                                                       0);
          if ( v8 )
          {
            v58 = this;
            v59 = v30 | (v35 < v37);
            goto LABEL_158;
          }
        }
        break;
      case 6:
        v51 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          v20 = v51;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity, partyItem);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          v21 = *(_DWORD *)(*((_QWORD *)this + 23) + 172LL);
          IsSearchVals_49612428 = v20 >= v21;
          if ( v20 >= v21 )
            goto LABEL_120;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v20, 0);
            if ( this )
            {
              v51 = v20 + 1;
              if ( *((_BYTE *)this + 234) )
                goto LABEL_120;
              continue;
            }
          }
          goto LABEL_163;
        }
      case 7:
        v42 = 0;
        v43 = 1;
        while ( 1 )
        {
          v44 = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity, partyItem);
            v44 = BalanceConfig_TypeInfo;
          }
          if ( v42 >= v44->static_fields->DeckMemberMax )
            goto LABEL_88;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionEntity->fields.targetVals,
                                                       v42 + 1,
                                                       (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_83;
          if ( !partyItem )
            goto LABEL_163;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v42, 0);
          if ( !this )
            goto LABEL_163;
          v45 = this;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                       (PartyOrganizationListViewItem_o *)this,
                                                       0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
LABEL_83:
            ++v42;
            continue;
          }
          targetVals = restrictionEntity->fields.targetVals;
          if ( !targetVals )
            goto LABEL_163;
          max_length = targetVals->max_length;
          v48 = LOBYTE(v45[2].fields.m_CancellationTokenSource) == 0;
          if ( max_length == 1 )
            break;
          v43 = 0;
          ++v42;
          if ( LOBYTE(v45[2].fields.m_CancellationTokenSource) )
          {
            v43 = 0;
LABEL_88:
            v48 = 0;
            IsSearchVals_49612428 = 1;
            goto LABEL_89;
          }
        }
        v43 = 0;
        IsSearchVals_49612428 = LOBYTE(v45[2].fields.m_CancellationTokenSource) != 0;
LABEL_89:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
        if ( v43 )
          v49 = 1;
        else
          v49 = v48;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_75703400(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_43/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0);
        if ( !v8 )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v8, v49, (System_String_o *)this, v50);
        if ( !v43 )
          goto LABEL_150;
        goto LABEL_159;
      case 8:
        v29 = 0;
        v30 = 1;
LABEL_54:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity, partyItem);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v29 >= *(_DWORD *)(*((_QWORD *)this + 23) + 176LL) )
          goto LABEL_153;
        if ( !partyItem )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v29, 0);
        if ( !this )
          break;
        v31 = (PartyOrganizationListViewItem_o *)this;
        if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0) )
          goto LABEL_63;
        if ( v31->fields.isFollower )
        {
          v30 = 0;
LABEL_153:
          IsSearchVals_49612428 = 0;
          v68 = 1;
        }
        else
        {
          v32 = v31->fields._ServantEntity_k__BackingField;
          v33 = v31->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v31, 0);
          if ( !v32 )
            break;
          v34 = ServantEntity__getIndividuality(v32, v33, (int32_t)this, 0);
          v30 = 0;
          if ( !RestrictionEntity__IsSearchVals_49612428(restrictionEntity, v34, 0) )
          {
LABEL_63:
            ++v29;
            goto LABEL_54;
          }
          v68 = 0;
          IsSearchVals_49612428 = 1;
        }
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_75703400(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_43/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0);
        if ( !v8 )
          break;
        v58 = this;
        v59 = v68 | v30;
LABEL_158:
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v8, v59 & 1, (System_String_o *)v58, v57);
        if ( (v30 & 1) != 0 )
        {
LABEL_159:
          v9 = 1;
          return v9 & 1;
        }
LABEL_150:
        v9 = IsSearchVals_49612428 ^ 1;
        return v9 & 1;
      case 9:
        if ( !partyItem )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, 0, 0);
        if ( !this )
          break;
        v22 = (PartyOrganizationListViewItem_o *)this;
        IsEmpty = PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0);
        if ( IsEmpty || v22->fields.isFollower )
        {
          IsSearchVals_49612428 = 0;
          v24 = 1;
        }
        else
        {
          v69 = v22->fields._ServantEntity_k__BackingField;
          v70 = v22->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v22, 0);
          if ( !v69 )
            break;
          v71 = ServantEntity__getIndividuality(v69, v70, (int32_t)this, 0);
          IsSearchVals_49612428 = RestrictionEntity__IsSearchVals_49612428(restrictionEntity, v71, 0);
          v24 = IsSearchVals_49612428 ^ 1;
        }
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
        if ( this )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_75703400(
                                                       (System_String_o *)this,
                                                       (System_String_o *)StringLiteral_43/*"\n"*/,
                                                       (System_String_o *)StringLiteral_1/*""*/,
                                                       0);
          if ( v8 )
          {
            RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v8, v24 & 1, (System_String_o *)this, v25);
            if ( IsEmpty )
              goto LABEL_159;
            goto LABEL_150;
          }
        }
        break;
      case 0xA:
        v27 = 0;
        v28 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity, partyItem);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v27 < *(_DWORD *)(*((_QWORD *)this + 23) + 172LL) )
          {
            if ( partyItem )
            {
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v27, 0);
              if ( this )
              {
                ++v27;
                v28 += !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0);
                continue;
              }
            }
            goto LABEL_163;
          }
          break;
        }
        if ( !questRestrictionInfo )
          break;
        if ( questRestrictionInfo->fields.isNpcMultipleBattle )
          goto LABEL_128;
LABEL_124:
        if ( restrictionEntity->fields.rangeType == 1 )
        {
          v55 = restrictionEntity->fields.targetVals;
          if ( !v55 )
            break;
          if ( !LODWORD(v55->max_length) )
LABEL_164:
            sub_2213CE4(this);
          v56 = v28 == v55->m_Items[0];
        }
        else
        {
LABEL_128:
          v56 = 1;
        }
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
        if ( !this )
          break;
        v14 = System_String__Replace_75703400(
                (System_String_o *)this,
                (System_String_o *)StringLiteral_43/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0);
        v17 = v8;
        v16 = !v56;
        IsSearchVals_49612428 = v56;
        goto LABEL_149;
      case 0xB:
        v52 = 0;
        v28 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity, partyItem);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v52 >= *(_DWORD *)(*((_QWORD *)this + 23) + 172LL) )
            goto LABEL_124;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v52, 0);
            if ( this )
            {
              v53 = this;
              if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0) )
                v28 += LOBYTE(v53[2].fields.m_CancellationTokenSource) ^ 1;
              ++v52;
              continue;
            }
          }
          goto LABEL_163;
        }
      case 0xC:
      case 0x10:
        targetVals2 = restrictionEntity->fields.targetVals2;
        if ( !targetVals2 )
          break;
        if ( !LODWORD(targetVals2->max_length) )
          goto LABEL_164;
        if ( !partyItem )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(
                                                     partyItem,
                                                     targetVals2->m_Items[0] - 1,
                                                     0);
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                     (PartyOrganizationListViewItem_o *)this,
                                                     0);
        name = restrictionEntity->fields.name;
        if ( !name )
          break;
        v12 = (char)this;
        IsSearchVals_49612428 = (unsigned __int8)this ^ 1;
        v14 = System_String__Replace_75703400(
                name,
                (System_String_o *)StringLiteral_43/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0);
        v16 = v12 & 1;
        v17 = v8;
        goto LABEL_149;
      case 0xD:
        v54 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          v20 = v54;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity, partyItem);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          v21 = *(_DWORD *)(*((_QWORD *)this + 23) + 172LL);
          IsSearchVals_49612428 = v20 >= v21;
          if ( v20 >= v21 )
            goto LABEL_120;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v20, 0);
            if ( this )
            {
              v54 = v20 + 1;
              if ( *((_BYTE *)this + 353) )
                goto LABEL_120;
              continue;
            }
          }
          goto LABEL_163;
        }
      case 0xE:
        v18 = 0;
LABEL_12:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity, partyItem);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v18 >= *(_DWORD *)(*((_QWORD *)this + 23) + 172LL) )
        {
          for ( i = 0; ; ++i )
          {
            if ( !*((_DWORD *)this + 57) )
            {
              j_il2cpp_runtime_class_init_0(this, restrictionEntity, partyItem);
              this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
            }
            v61 = *(_DWORD *)(*((_QWORD *)this + 23) + 176LL);
            v62 = i >= v61;
            if ( i >= v61 )
              break;
            if ( !partyItem )
              goto LABEL_163;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, i, 0);
            if ( !this )
              goto LABEL_163;
            v63 = (PartyOrganizationListViewItem_o *)this;
            if ( *((_BYTE *)this + 237)
              && !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0) )
            {
              v64 = v63->fields._ServantEntity_k__BackingField;
              v65 = v63->fields.svtLimitCount;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v63, 0);
              if ( !v64 )
                goto LABEL_163;
              v66 = ServantEntity__getIndividuality(v64, v65, (int32_t)this, 0);
              if ( RestrictionEntity__IsSearchVals_49612428(restrictionEntity, v66, 0) )
                break;
            }
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          IsSearchVals_49612428 = i < v61;
        }
        else
        {
          if ( !partyItem )
            break;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v18, 0);
          if ( !this )
            break;
          if ( !*((_BYTE *)this + 237) || !*((_BYTE *)this + 259) )
          {
            ++v18;
            goto LABEL_12;
          }
          IsSearchVals_49612428 = 0;
          v62 = 1;
        }
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
        if ( !this )
          break;
        v14 = System_String__Replace_75703400(
                (System_String_o *)this,
                (System_String_o *)StringLiteral_43/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0);
        v17 = v8;
        v16 = v62;
        goto LABEL_149;
      case 0xF:
        v26 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          v20 = v26;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity, partyItem);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          v21 = *(_DWORD *)(*((_QWORD *)this + 23) + 172LL);
          IsSearchVals_49612428 = v20 >= v21;
          if ( v20 >= v21 )
            goto LABEL_120;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v20, 0);
            if ( this )
            {
              v26 = v20 + 1;
              if ( *((_BYTE *)this + 235) )
                goto LABEL_120;
              continue;
            }
          }
          goto LABEL_163;
        }
      case 0x11:
        v19 = 0;
LABEL_21:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        v20 = v19;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity, partyItem);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v21 = *(_DWORD *)(*((_QWORD *)this + 23) + 172LL);
        IsSearchVals_49612428 = v20 >= v21;
        if ( v20 >= v21 )
        {
LABEL_120:
          this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
          if ( !this )
            break;
          v14 = System_String__Replace_75703400(
                  (System_String_o *)this,
                  (System_String_o *)StringLiteral_43/*"\n"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0);
          v17 = v8;
          v16 = v20 < v21;
LABEL_149:
          RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v17, v16, v14, v15);
          goto LABEL_150;
        }
        if ( partyItem )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v20, 0);
          if ( this )
          {
            if ( *((_BYTE *)this + 354) )
              goto LABEL_120;
            v19 = v20 + 1;
            if ( *((int *)this + 89) > 0 )
              goto LABEL_120;
            goto LABEL_21;
          }
        }
        break;
      default:
        return v9 & 1;
    }
  }
LABEL_163:
  sub_2213CDC(this, restrictionEntity);
}


// local variable allocation has failed, the output may be wrong!
void RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
        RestrictionNotSatisfyWholeInfo_o *this,
        bool isWarning,
        System_String_o *message,
        const MethodInfo *method)
{
  UnityEngine_Component_o *notSatisfySprite; // x0
  UILabel_o *wholeInfoPrefixLabel; // x21
  RestrictionNotSatisfyWholeInfo_o *v9; // x0
  const MethodInfo *v10; // x3
  struct UILabel_o *wholeInfoLabel; // x20
  RestrictionNotSatisfyWholeInfo_o *v12; // x0
  const MethodInfo *v13; // x3
  System_String_o *v14; // x1

  if ( (byte_596C298 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26840/*"・"*/);
    byte_596C298 = 1;
  }
  notSatisfySprite = (UnityEngine_Component_o *)this->fields.notSatisfySprite;
  if ( !isWarning )
  {
    if ( notSatisfySprite )
    {
      notSatisfySprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(notSatisfySprite, 0);
      if ( notSatisfySprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)notSatisfySprite, 0, 0);
        notSatisfySprite = (UnityEngine_Component_o *)this->fields.wholeInfoPrefixLabel;
        if ( notSatisfySprite )
        {
          UILabel__set_text((UILabel_o *)notSatisfySprite, (System_String_o *)StringLiteral_26840/*"・"*/, 0);
          notSatisfySprite = (UnityEngine_Component_o *)this->fields.wholeInfoLabel;
          if ( notSatisfySprite )
          {
            v14 = message;
            goto LABEL_14;
          }
        }
      }
    }
LABEL_15:
    sub_2213CDC(notSatisfySprite, isWarning);
  }
  if ( !notSatisfySprite )
    goto LABEL_15;
  notSatisfySprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(notSatisfySprite, 0);
  if ( !notSatisfySprite )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)notSatisfySprite, 1, 0);
  wholeInfoPrefixLabel = this->fields.wholeInfoPrefixLabel;
  notSatisfySprite = (UnityEngine_Component_o *)RestrictionNotSatisfyWholeInfo__AddColorCodeAndFixMessage(
                                                  v9,
                                                  (System_String_o *)StringLiteral_26840/*"・"*/,
                                                  0,
                                                  v10);
  if ( !wholeInfoPrefixLabel )
    goto LABEL_15;
  UILabel__set_text(wholeInfoPrefixLabel, (System_String_o *)notSatisfySprite, 0);
  wholeInfoLabel = this->fields.wholeInfoLabel;
  notSatisfySprite = (UnityEngine_Component_o *)RestrictionNotSatisfyWholeInfo__AddColorCodeAndFixMessage(
                                                  v12,
                                                  message,
                                                  1,
                                                  v13);
  if ( !wholeInfoLabel )
    goto LABEL_15;
  v14 = (System_String_o *)notSatisfySprite;
  notSatisfySprite = (UnityEngine_Component_o *)wholeInfoLabel;
LABEL_14:
  UILabel__set_text((UILabel_o *)notSatisfySprite, v14, 0);
}