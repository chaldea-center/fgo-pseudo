void RestrictionNotSatisfyWholeInfo___ctor(RestrictionNotSatisfyWholeInfo_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


System_String_o *RestrictionNotSatisfyWholeInfo__AddColorCodeAndFixMessage(
        RestrictionNotSatisfyWholeInfo_o *this,
        System_String_o *message,
        bool isAddFixMessage,
        const MethodInfo *method)
{
  System_String_o *v6; // x0

  if ( (byte_4CC314F & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_15827/*"[-]"*/);
    sub_1C713B0(&StringLiteral_11109/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1C713B0(&StringLiteral_15926/*"[FFFF00]"*/);
    byte_4CC314F = 1;
  }
  if ( !isAddFixMessage )
    return System_String__Concat_64069988(
             (System_String_o *)StringLiteral_15926/*"[FFFF00]"*/,
             message,
             (System_String_o *)StringLiteral_15827/*"[-]"*/,
             0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11109/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0);
  return System_String__Concat_64071992(
           (System_String_o *)StringLiteral_15926/*"[FFFF00]"*/,
           message,
           v6,
           (System_String_o *)StringLiteral_15827/*"[-]"*/,
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
  int32_t v8; // w23
  char v9; // w25
  BalanceConfig_c *v10; // x0
  int32_t v11; // w22
  int32_t v12; // w29
  PartyOrganizationListViewItem_o *v13; // x24
  struct System_Int32_array *targetVals2; // x8
  ServantEntity_o *v15; // x25
  int32_t v16; // w26
  System_Int32_array *v17; // x0
  char v18; // w24
  int32_t v19; // w22
  char v20; // w24
  int32_t v21; // w27
  PartyOrganizationListViewItem_o *v22; // x23
  ServantEntity_o *servantEntity; // x24
  int32_t svtLimitCount; // w25
  System_Int32_array *Individuality; // x0
  char v26; // w23
  int32_t v27; // w8
  int32_t v28; // w22
  int32_t v29; // w24
  System_String_o *v30; // x0
  const MethodInfo *v31; // x3
  char v32; // w26
  int32_t v33; // w23
  char v34; // w25
  BalanceConfig_c *v35; // x0
  int32_t v36; // w22
  int32_t DeckMemberMax; // w29
  PartyOrganizationListViewItem_o *v38; // x24
  ServantEntity_o *v39; // x25
  int32_t v40; // w26
  System_Int32_array *v41; // x0
  int32_t v42; // w23
  BalanceConfig_c *v43; // x0
  PartyOrganizationListViewItem_o *v44; // x24
  ServantEntity_o *v45; // x25
  int32_t v46; // w26
  System_Int32_array *v47; // x0
  const MethodInfo *v48; // x3
  RestrictionNotSatisfyWholeInfo_o *v49; // x2
  bool v50; // w1
  int32_t v51; // w22
  int32_t v52; // w8
  System_String_o *v53; // x2
  const MethodInfo *v54; // x3
  RestrictionNotSatisfyWholeInfo_o *v55; // x0
  bool v56; // w1
  int32_t v57; // w22
  bool v58; // w21
  const MethodInfo *v60; // x3
  int32_t i; // w22
  int32_t v62; // w28
  PartyOrganizationListViewItem_o *v63; // x23
  ServantEntity_o *v64; // x24
  int32_t v65; // w25
  System_Int32_array *v66; // x0

  v7 = this;
  if ( (byte_4CC3149 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C713B0(&StringLiteral_43/*"\n"*/);
    this = (RestrictionNotSatisfyWholeInfo_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC3149 = 1;
  }
  if ( restrictionWholeEntity )
  {
    switch ( restrictionWholeEntity->fields.type )
    {
      case 1:
        v19 = 0;
        v20 = 1;
LABEL_20:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v21 = *(_DWORD *)(this[3].fields.m_CachedPtr + 172);
        if ( v19 >= v21 )
        {
          v26 = v20;
          goto LABEL_100;
        }
        if ( !partyItem )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v19, 0);
        if ( !this )
          break;
        v22 = (PartyOrganizationListViewItem_o *)this;
        if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0) )
        {
LABEL_28:
          ++v19;
          goto LABEL_20;
        }
        servantEntity = v22->fields.servantEntity;
        svtLimitCount = v22->fields.svtLimitCount;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v22, 0);
        if ( !servantEntity )
          break;
        Individuality = ServantEntity__getIndividuality(servantEntity, svtLimitCount, (int32_t)this, 0);
        v20 = 0;
        v26 = 0;
        if ( RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, Individuality, 0) )
          goto LABEL_28;
LABEL_100:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        v32 = v19 >= v21;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_64078288(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_43/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0);
        if ( !v7 )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, (v19 < v21) | v26 & 1, (System_String_o *)this, v60);
        if ( (v26 & 1) != 0 )
          return 1;
        return v32 ^ 1;
      case 2:
        v27 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          v28 = v27;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          v29 = *(_DWORD *)(this[3].fields.m_CachedPtr + 172);
          if ( v28 >= v29 )
            goto LABEL_82;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v28, 0);
            if ( this )
            {
              v27 = v28 + 1;
              if ( BYTE1(this[6].fields.m_CancellationTokenSource) )
                goto LABEL_82;
              continue;
            }
          }
          goto LABEL_125;
        }
      case 3:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        if ( !this )
          break;
        v30 = System_String__Replace_64078288(
                (System_String_o *)this,
                (System_String_o *)StringLiteral_43/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0);
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, 0, v30, v31);
        v32 = 1;
        return v32 ^ 1;
      case 4:
        v33 = 0;
        v34 = 1;
        while ( 1 )
        {
          v35 = BalanceConfig_TypeInfo;
          v36 = v33;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v35 = BalanceConfig_TypeInfo;
          }
          DeckMemberMax = v35->static_fields->DeckMemberMax;
          if ( v33 >= DeckMemberMax )
            break;
          ++v33;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       v36 + 1,
                                                       (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_125;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v36, 0);
            if ( !this )
              goto LABEL_125;
            v38 = (PartyOrganizationListViewItem_o *)this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0) )
            {
              v39 = v38->fields.servantEntity;
              v40 = v38->fields.svtLimitCount;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v38, 0);
              if ( !v39 )
                goto LABEL_125;
              v33 = v36 + 1;
              v41 = ServantEntity__getIndividuality(v39, v40, (int32_t)this, 0);
              v34 = 0;
              v18 = 0;
              if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v41, 0) )
                goto LABEL_94;
            }
          }
        }
        v18 = v34;
LABEL_94:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        v32 = v36 >= DeckMemberMax;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_64078288(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_43/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0);
        if ( !v7 )
          break;
        v49 = this;
        v50 = (v36 < DeckMemberMax) | v18 & 1;
        goto LABEL_97;
      case 5:
        v42 = 0;
        v9 = 1;
        while ( 1 )
        {
LABEL_51:
          v43 = BalanceConfig_TypeInfo;
          v11 = v42;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v43 = BalanceConfig_TypeInfo;
          }
          v12 = v43->static_fields->DeckMemberMax;
          if ( v42 >= v12 )
            goto LABEL_62;
          ++v42;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       v11 + 1,
                                                       (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_125;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v11, 0);
            if ( !this )
              goto LABEL_125;
            v44 = (PartyOrganizationListViewItem_o *)this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0) )
              break;
          }
        }
        if ( v44->fields.isFollower )
          goto LABEL_124;
        v45 = v44->fields.servantEntity;
        v46 = v44->fields.svtLimitCount;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v44, 0);
        if ( v45 )
        {
          v42 = v11 + 1;
          v47 = ServantEntity__getIndividuality(v45, v46, (int32_t)this, 0);
          v9 = 0;
          v18 = 0;
          if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v47, 0) )
            goto LABEL_63;
          goto LABEL_51;
        }
        break;
      case 6:
      case 7:
        v8 = 0;
        v9 = 1;
        while ( 1 )
        {
LABEL_6:
          v10 = BalanceConfig_TypeInfo;
          v11 = v8;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v10 = BalanceConfig_TypeInfo;
          }
          v12 = v10->static_fields->DeckMemberMax;
          if ( v8 >= v12 )
          {
LABEL_62:
            v18 = v9;
            goto LABEL_63;
          }
          ++v8;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       v11 + 1,
                                                       (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_125;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v11, 0);
            if ( !this )
              goto LABEL_125;
            v13 = (PartyOrganizationListViewItem_o *)this;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                         (PartyOrganizationListViewItem_o *)this,
                                                         0);
            if ( ((unsigned __int8)this & 1) == 0 )
              break;
          }
        }
        targetVals2 = restrictionWholeEntity->fields.targetVals2;
        if ( !targetVals2 )
          break;
        if ( LODWORD(targetVals2->max_length) != 1 || v13->fields.isFollower )
        {
          v15 = v13->fields.servantEntity;
          v16 = v13->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v13, 0);
          if ( !v15 )
            break;
          v8 = v11 + 1;
          v17 = ServantEntity__getIndividuality(v15, v16, (int32_t)this, 0);
          v9 = 0;
          v18 = 0;
          if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v17, 0) )
            goto LABEL_63;
          goto LABEL_6;
        }
LABEL_124:
        v18 = 0;
LABEL_63:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        v32 = v11 >= v12;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_64078288(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_43/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0);
        if ( !v7 )
          break;
        v49 = this;
        v50 = v18 & 1 | (v11 < v12);
LABEL_97:
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, v50, (System_String_o *)v49, v48);
        if ( (v18 & 1) != 0 )
          return 1;
        return v32 ^ 1;
      case 8:
        v51 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v51 >= *(_DWORD *)(this[3].fields.m_CachedPtr + 172) )
          {
            for ( i = 0; ; ++i )
            {
              if ( !LODWORD(this[4].klass) )
              {
                j_il2cpp_runtime_class_init_0(this);
                this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
              }
              v62 = *(_DWORD *)(this[3].fields.m_CachedPtr + 176);
              v32 = i < v62;
              if ( i >= v62 )
                break;
              if ( !partyItem )
                goto LABEL_125;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, i, 0);
              if ( !this )
                goto LABEL_125;
              v63 = (PartyOrganizationListViewItem_o *)this;
              if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0) )
              {
                v64 = v63->fields.servantEntity;
                v65 = v63->fields.svtLimitCount;
                this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v63, 0);
                if ( !v64 )
                  goto LABEL_125;
                v66 = ServantEntity__getIndividuality(v64, v65, (int32_t)this, 0);
                if ( RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v66, 0) )
                  break;
              }
              this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
            }
            v58 = i >= v62;
            goto LABEL_116;
          }
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v51, 0);
            if ( this )
            {
              if ( !BYTE5(this[4].fields.m_CachedPtr) || !BYTE3(this[4].fields.wholeInfoPrefixLabel) )
              {
                ++v51;
                continue;
              }
              v32 = 0;
              v58 = 1;
LABEL_116:
              this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
              if ( !this )
                goto LABEL_125;
LABEL_121:
              v53 = System_String__Replace_64078288(
                      (System_String_o *)this,
                      (System_String_o *)StringLiteral_43/*"\n"*/,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0);
              v55 = v7;
              v56 = v58;
LABEL_122:
              RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v55, v56, v53, v54);
              return v32 ^ 1;
            }
          }
          break;
        }
        break;
      case 9:
        v52 = 0;
LABEL_76:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        v28 = v52;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v29 = *(_DWORD *)(this[3].fields.m_CachedPtr + 172);
        if ( v28 >= v29 )
        {
LABEL_82:
          this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
          if ( !this )
            break;
          v32 = v28 >= v29;
          v53 = System_String__Replace_64078288(
                  (System_String_o *)this,
                  (System_String_o *)StringLiteral_43/*"\n"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0);
          v55 = v7;
          v56 = v28 < v29;
          goto LABEL_122;
        }
        if ( partyItem )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v28, 0);
          if ( this )
          {
            v52 = v28 + 1;
            if ( BYTE3(this[4].fields.m_CachedPtr) )
              goto LABEL_82;
            goto LABEL_76;
          }
        }
        break;
      case 0xA:
        v57 = 0;
        while ( 1 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v57 >= *(_DWORD *)(this[3].fields.m_CachedPtr + 172) )
            break;
          if ( !partyItem )
            goto LABEL_125;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v57, 0);
          if ( !this )
            goto LABEL_125;
          if ( !BYTE2(this[6].fields.m_CancellationTokenSource) )
          {
            ++v57;
            if ( SHIDWORD(this[6].fields.m_CancellationTokenSource) <= 0 )
              continue;
          }
          v58 = 1;
          goto LABEL_119;
        }
        v58 = 0;
LABEL_119:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        if ( !this )
          break;
        v32 = !v58;
        goto LABEL_121;
      default:
        return 1;
    }
  }
LABEL_125:
  sub_1C71608(this, restrictionWholeEntity);
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

  if ( (byte_4CC314B & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_43/*"\n"*/);
    sub_1C713B0(&StringLiteral_11105/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC314B = 1;
  }
  v5 = 0;
  do
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    v7 = v5;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
  while ( ((unsigned __int64)Member[11].monitor & 0x8000000000000000LL) != 0 );
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_11105/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0);
  if ( !Member )
LABEL_14:
    sub_1C71608(Member, partyItem);
  v9 = System_String__Replace_64078288(
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

  if ( (byte_4CC314C & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_43/*"\n"*/);
    sub_1C713B0(&StringLiteral_10272/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC314C = 1;
  }
  v5 = 0;
  do
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    v7 = v5;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
  while ( !LOBYTE(Member[15].monitor) );
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_10272/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
  if ( !Member )
LABEL_14:
    sub_1C71608(Member, partyItem);
  v9 = System_String__Replace_64078288(
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

  if ( (byte_4CC314A & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_43/*"\n"*/);
    sub_1C713B0(&StringLiteral_11108/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC314A = 1;
  }
  v5 = 0;
  do
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    v7 = v5;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
  while ( !BYTE2(Member[10].klass) );
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_11108/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0);
  if ( !Member )
LABEL_14:
    sub_1C71608(Member, partyItem);
  v9 = System_String__Replace_64078288(
         Member,
         (System_String_o *)StringLiteral_43/*"\n"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0);
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v7 < v8, v9, v10);
  return v7 < v8;
}


bool RestrictionNotSatisfyWholeInfo__Init_34958160(
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
  char IsSearchVals_42866424; // w22
  System_String_o *v14; // x2
  const MethodInfo *v15; // x3
  char v16; // w1
  int32_t v17; // w22
  char v18; // w24
  int32_t v19; // w27
  PartyOrganizationListViewItem_o *v20; // x23
  ServantEntity_o *servantEntity; // x24
  int32_t svtLimitCount; // w25
  System_Int32_array *Individuality; // x0
  char v24; // w23
  int32_t v25; // w8
  int32_t v26; // w22
  int32_t v27; // w24
  int v28; // w23
  char v29; // w25
  BalanceConfig_c *v30; // x0
  int32_t v31; // w22
  RestrictionNotSatisfyWholeInfo_o *v32; // x24
  struct System_Int32_array *targetVals; // x8
  const MethodInfo *v34; // x3
  int32_t v35; // w22
  char v36; // w24
  PartyOrganizationListViewItem_o *v37; // x23
  ServantEntity_o *v38; // x24
  int32_t v39; // w25
  System_Int32_array *v40; // x0
  PartyOrganizationListViewItem_o *v41; // x22
  bool IsEmpty; // w21
  char v43; // w23
  int32_t v44; // w23
  int v45; // w24
  int32_t v46; // w22
  RestrictionNotSatisfyWholeInfo_o *v47; // x23
  int32_t v48; // w8
  int32_t v49; // w22
  int32_t v50; // w8
  bool v51; // cc
  char v52; // w20
  RestrictionNotSatisfyWholeInfo_o *v53; // x0
  int32_t v54; // w22
  bool v55; // w21
  struct System_Int32_array *v56; // x8
  char v57; // w20
  const MethodInfo *v58; // x3
  int32_t i; // w23
  int32_t v60; // w28
  PartyOrganizationListViewItem_o *v61; // x24
  ServantEntity_o *v62; // x25
  int32_t v63; // w26
  System_Int32_array *v64; // x0
  const MethodInfo *v66; // x3
  ServantEntity_o *v67; // x23
  int32_t v68; // w24
  System_Int32_array *v69; // x0
  const MethodInfo *v70; // x3

  v8 = this;
  if ( (byte_4CC314D & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C713B0(&StringLiteral_43/*"\n"*/);
    this = (RestrictionNotSatisfyWholeInfo_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC314D = 1;
  }
  if ( !restrictionEntity )
    goto LABEL_171;
  v9 = 1;
  switch ( restrictionEntity->fields.type )
  {
    case 1:
      v17 = 0;
      v18 = 1;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v19 = *(_DWORD *)(this[3].fields.m_CachedPtr + 172);
        if ( v17 >= v19 )
        {
          v24 = v18;
        }
        else
        {
          if ( !partyItem )
            goto LABEL_171;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v17, 0);
          if ( !this )
            goto LABEL_171;
          v20 = (PartyOrganizationListViewItem_o *)this;
          if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0) )
          {
LABEL_20:
            ++v17;
            continue;
          }
          servantEntity = v20->fields.servantEntity;
          svtLimitCount = v20->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v20, 0);
          if ( !servantEntity )
            goto LABEL_171;
          Individuality = ServantEntity__getIndividuality(servantEntity, svtLimitCount, (int32_t)this, 0);
          v18 = 0;
          v24 = 0;
          if ( !RestrictionEntity__IsRestriction_42866748(restrictionEntity, Individuality, 0) )
            goto LABEL_20;
        }
        break;
      }
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      v51 = v17 < v19;
      IsSearchVals_42866424 = v17 >= v19;
      v57 = v51;
      if ( this )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_64078288(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_43/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0);
        if ( v8 )
        {
          RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v8, v57 | v24 & 1, (System_String_o *)this, v58);
          if ( (v24 & 1) == 0 )
            goto LABEL_154;
LABEL_169:
          v9 = 1;
          return v9 & 1;
        }
      }
LABEL_171:
      sub_1C71608(this, restrictionEntity);
    case 6:
      v25 = 0;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        v26 = v25;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v27 = *(_DWORD *)(this[3].fields.m_CachedPtr + 172);
        if ( v26 >= v27 )
          goto LABEL_100;
        if ( partyItem )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v26, 0);
          if ( this )
          {
            v25 = v26 + 1;
            if ( BYTE2(this[4].fields.m_CachedPtr) )
              goto LABEL_100;
            continue;
          }
        }
        goto LABEL_171;
      }
    case 7:
      v28 = 0;
      v29 = 1;
      while ( 1 )
      {
LABEL_30:
        v30 = BalanceConfig_TypeInfo;
        v31 = v28;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v30 = BalanceConfig_TypeInfo;
        }
        if ( v28 >= v30->static_fields->DeckMemberMax )
        {
LABEL_40:
          IsSearchVals_42866424 = 1;
          goto LABEL_41;
        }
        ++v28;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)restrictionEntity->fields.targetVals,
                                                     v31 + 1,
                                                     (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !partyItem )
            goto LABEL_171;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v31, 0);
          if ( !this )
            goto LABEL_171;
          v32 = this;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                       (PartyOrganizationListViewItem_o *)this,
                                                       0);
          if ( ((unsigned __int8)this & 1) == 0 )
            break;
        }
      }
      targetVals = restrictionEntity->fields.targetVals;
      if ( !targetVals )
        goto LABEL_171;
      if ( LODWORD(targetVals->max_length) != 1 )
      {
        v29 = 0;
        v28 = v31 + 1;
        if ( LOBYTE(v32[2].fields.m_CancellationTokenSource) )
          goto LABEL_40;
        goto LABEL_30;
      }
      v29 = 0;
      IsSearchVals_42866424 = LOBYTE(v32[2].fields.m_CancellationTokenSource) != 0;
LABEL_41:
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
      this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_64078288(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                                   (System_String_o *)StringLiteral_1/*""*/,
                                                   0);
      if ( !v8 )
        goto LABEL_171;
      RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
        v8,
        v29 & 1 | IsSearchVals_42866424 ^ 1,
        (System_String_o *)this,
        v34);
      if ( (v29 & 1) == 0 )
        goto LABEL_154;
      goto LABEL_169;
    case 8:
      v35 = 0;
      v36 = 1;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v35 >= *(_DWORD *)(this[3].fields.m_CachedPtr + 176) )
          goto LABEL_157;
        if ( !partyItem )
          goto LABEL_171;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v35, 0);
        if ( !this )
          goto LABEL_171;
        v37 = (PartyOrganizationListViewItem_o *)this;
        if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0) )
          goto LABEL_55;
        if ( v37->fields.isFollower )
        {
          v36 = 0;
LABEL_157:
          IsSearchVals_42866424 = 0;
        }
        else
        {
          v38 = v37->fields.servantEntity;
          v39 = v37->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v37, 0);
          if ( !v38 )
            goto LABEL_171;
          v40 = ServantEntity__getIndividuality(v38, v39, (int32_t)this, 0);
          v36 = 0;
          if ( !RestrictionEntity__IsSearchVals_42866424(restrictionEntity, v40, 0) )
          {
LABEL_55:
            ++v35;
            continue;
          }
          IsSearchVals_42866424 = 1;
        }
        break;
      }
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
      this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_64078288(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                                   (System_String_o *)StringLiteral_1/*""*/,
                                                   0);
      if ( !v8 )
        goto LABEL_171;
      RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
        v8,
        v36 & 1 | IsSearchVals_42866424 ^ 1,
        (System_String_o *)this,
        v66);
      if ( (v36 & 1) != 0 )
        goto LABEL_169;
      goto LABEL_154;
    case 9:
      if ( !partyItem )
        goto LABEL_171;
      this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, 0, 0);
      if ( !this )
        goto LABEL_171;
      v41 = (PartyOrganizationListViewItem_o *)this;
      IsEmpty = PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0);
      if ( IsEmpty )
      {
        IsSearchVals_42866424 = 0;
        v43 = 1;
      }
      else
      {
        if ( v41->fields.isFollower )
        {
          IsSearchVals_42866424 = 0;
        }
        else
        {
          v67 = v41->fields.servantEntity;
          v68 = v41->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v41, 0);
          if ( !v67 )
            goto LABEL_171;
          v69 = ServantEntity__getIndividuality(v67, v68, (int32_t)this, 0);
          IsSearchVals_42866424 = RestrictionEntity__IsSearchVals_42866424(restrictionEntity, v69, 0);
        }
        v43 = IsSearchVals_42866424 ^ 1;
      }
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
      this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_64078288(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                                   (System_String_o *)StringLiteral_1/*""*/,
                                                   0);
      if ( !v8 )
        goto LABEL_171;
      RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v8, v43 & 1, (System_String_o *)this, v70);
      if ( IsEmpty )
        goto LABEL_169;
      goto LABEL_154;
    case 0xA:
      v44 = 0;
      v45 = 0;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v44 < *(_DWORD *)(this[3].fields.m_CachedPtr + 172) )
        {
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v44, 0);
            if ( this )
            {
              v45 += !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0);
              ++v44;
              continue;
            }
          }
          goto LABEL_171;
        }
        break;
      }
      if ( !questRestrictionInfo )
        goto LABEL_171;
      if ( questRestrictionInfo->fields.isNpcMultipleBattle )
        goto LABEL_120;
LABEL_116:
      if ( restrictionEntity->fields.rangeType == 1 )
      {
        v56 = restrictionEntity->fields.targetVals;
        if ( !v56 )
          goto LABEL_171;
        if ( !LODWORD(v56->max_length) )
LABEL_172:
          sub_1C71610(this);
        IsSearchVals_42866424 = v45 == v56->m_Items[0];
      }
      else
      {
LABEL_120:
        IsSearchVals_42866424 = 1;
      }
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
      v14 = System_String__Replace_64078288(
              (System_String_o *)this,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0);
      v16 = IsSearchVals_42866424 ^ 1;
LABEL_123:
      v53 = v8;
      goto LABEL_153;
    case 0xB:
      v46 = 0;
      v45 = 0;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v46 >= *(_DWORD *)(this[3].fields.m_CachedPtr + 172) )
          goto LABEL_116;
        if ( partyItem )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v46, 0);
          if ( this )
          {
            v47 = this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0) )
              v45 += LOBYTE(v47[2].fields.m_CancellationTokenSource) ^ 1;
            ++v46;
            continue;
          }
        }
        goto LABEL_171;
      }
    case 0xC:
    case 0x10:
      targetVals2 = restrictionEntity->fields.targetVals2;
      if ( !targetVals2 )
        goto LABEL_171;
      if ( !LODWORD(targetVals2->max_length) )
        goto LABEL_172;
      if ( !partyItem )
        goto LABEL_171;
      this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, targetVals2->m_Items[0] - 1, 0);
      if ( !this )
        goto LABEL_171;
      this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                   (PartyOrganizationListViewItem_o *)this,
                                                   0);
      name = restrictionEntity->fields.name;
      if ( !name )
        goto LABEL_171;
      v12 = (char)this;
      IsSearchVals_42866424 = (unsigned __int8)this ^ 1;
      v14 = System_String__Replace_64078288(
              name,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0);
      v16 = v12 & 1;
      goto LABEL_123;
    case 0xD:
      v48 = 0;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        v26 = v48;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v27 = *(_DWORD *)(this[3].fields.m_CachedPtr + 172);
        if ( v26 >= v27 )
          goto LABEL_100;
        if ( partyItem )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v26, 0);
          if ( this )
          {
            v48 = v26 + 1;
            if ( BYTE1(this[6].fields.m_CancellationTokenSource) )
              goto LABEL_100;
            continue;
          }
        }
        goto LABEL_171;
      }
    case 0xE:
      v49 = 0;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v49 >= *(_DWORD *)(this[3].fields.m_CachedPtr + 172) )
        {
          for ( i = 0; ; ++i )
          {
            if ( !LODWORD(this[4].klass) )
            {
              j_il2cpp_runtime_class_init_0(this);
              this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
            }
            v60 = *(_DWORD *)(this[3].fields.m_CachedPtr + 176);
            IsSearchVals_42866424 = i < v60;
            if ( i >= v60 )
              break;
            if ( !partyItem )
              goto LABEL_171;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, i, 0);
            if ( !this )
              goto LABEL_171;
            v61 = (PartyOrganizationListViewItem_o *)this;
            if ( BYTE5(this[4].fields.m_CachedPtr)
              && !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0) )
            {
              v62 = v61->fields.servantEntity;
              v63 = v61->fields.svtLimitCount;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v61, 0);
              if ( !v62 )
                goto LABEL_171;
              v64 = ServantEntity__getIndividuality(v62, v63, (int32_t)this, 0);
              if ( RestrictionEntity__IsSearchVals_42866424(restrictionEntity, v64, 0) )
                break;
            }
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          v55 = i >= v60;
        }
        else
        {
          if ( !partyItem )
            goto LABEL_171;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v49, 0);
          if ( !this )
            goto LABEL_171;
          if ( !BYTE5(this[4].fields.m_CachedPtr) || !BYTE3(this[4].fields.wholeInfoPrefixLabel) )
          {
            ++v49;
            continue;
          }
          IsSearchVals_42866424 = 0;
          v55 = 1;
        }
        break;
      }
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
LABEL_152:
      v14 = System_String__Replace_64078288(
              (System_String_o *)this,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0);
      v53 = v8;
      v16 = v55;
      goto LABEL_153;
    case 0xF:
      v50 = 0;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        v26 = v50;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v27 = *(_DWORD *)(this[3].fields.m_CachedPtr + 172);
        if ( v26 < v27 )
        {
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v26, 0);
            if ( this )
            {
              v50 = v26 + 1;
              if ( BYTE3(this[4].fields.m_CachedPtr) )
                break;
              continue;
            }
          }
          goto LABEL_171;
        }
        break;
      }
LABEL_100:
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
      v51 = v26 < v27;
      IsSearchVals_42866424 = v26 >= v27;
      v52 = v51;
      v14 = System_String__Replace_64078288(
              (System_String_o *)this,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0);
      v53 = v8;
      v16 = v52;
LABEL_153:
      RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v53, v16, v14, v15);
LABEL_154:
      v9 = IsSearchVals_42866424 ^ 1;
      return v9 & 1;
    case 0x11:
      v54 = 0;
      while ( 1 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v54 >= *(_DWORD *)(this[3].fields.m_CachedPtr + 172) )
          break;
        if ( !partyItem )
          goto LABEL_171;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v54, 0);
        if ( !this )
          goto LABEL_171;
        if ( !BYTE2(this[6].fields.m_CancellationTokenSource) )
        {
          ++v54;
          if ( SHIDWORD(this[6].fields.m_CancellationTokenSource) <= 0 )
            continue;
        }
        v55 = 1;
        goto LABEL_150;
      }
      v55 = 0;
LABEL_150:
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
      IsSearchVals_42866424 = !v55;
      goto LABEL_152;
    default:
      return v9 & 1;
  }
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

  if ( (byte_4CC314E & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_25570/*"・"*/);
    byte_4CC314E = 1;
  }
  notSatisfySprite = (UnityEngine_Component_o *)this->fields.notSatisfySprite;
  if ( !notSatisfySprite )
    goto LABEL_13;
  notSatisfySprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(notSatisfySprite, 0);
  if ( !notSatisfySprite )
    goto LABEL_13;
  if ( !isWarning )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)notSatisfySprite, 0, 0);
    notSatisfySprite = (UnityEngine_Component_o *)this->fields.wholeInfoPrefixLabel;
    if ( notSatisfySprite )
    {
      UILabel__set_text((UILabel_o *)notSatisfySprite, (System_String_o *)StringLiteral_25570/*"・"*/, 0);
      notSatisfySprite = (UnityEngine_Component_o *)this->fields.wholeInfoLabel;
      if ( notSatisfySprite )
      {
        v14 = message;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_1C71608(notSatisfySprite, isWarning);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)notSatisfySprite, 1, 0);
  wholeInfoPrefixLabel = this->fields.wholeInfoPrefixLabel;
  notSatisfySprite = (UnityEngine_Component_o *)RestrictionNotSatisfyWholeInfo__AddColorCodeAndFixMessage(
                                                  v9,
                                                  (System_String_o *)StringLiteral_25570/*"・"*/,
                                                  0,
                                                  v10);
  if ( !wholeInfoPrefixLabel )
    goto LABEL_13;
  UILabel__set_text(wholeInfoPrefixLabel, (System_String_o *)notSatisfySprite, 0);
  wholeInfoLabel = this->fields.wholeInfoLabel;
  notSatisfySprite = (UnityEngine_Component_o *)RestrictionNotSatisfyWholeInfo__AddColorCodeAndFixMessage(
                                                  v12,
                                                  message,
                                                  1,
                                                  v13);
  if ( !wholeInfoLabel )
    goto LABEL_13;
  v14 = (System_String_o *)notSatisfySprite;
  notSatisfySprite = (UnityEngine_Component_o *)wholeInfoLabel;
LABEL_12:
  UILabel__set_text((UILabel_o *)notSatisfySprite, v14, 0);
}