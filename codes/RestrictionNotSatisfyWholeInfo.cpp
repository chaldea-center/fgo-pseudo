void __fastcall RestrictionNotSatisfyWholeInfo___ctor(RestrictionNotSatisfyWholeInfo_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall RestrictionNotSatisfyWholeInfo__AddColorCodeAndFixMessage(
        RestrictionNotSatisfyWholeInfo_o *this,
        System_String_o *message,
        bool isAddFixMessage,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x0

  if ( (byte_4B1228A & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, message, isAddFixMessage);
    sub_1BCA7E0(&StringLiteral_15997/*"[-]"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_11218/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_16102/*"[FFFF00]"*/, v10, v11);
    byte_4B1228A = 1;
  }
  if ( !isAddFixMessage )
    return System_String__Concat_62412480(
             (System_String_o *)StringLiteral_16102/*"[FFFF00]"*/,
             message,
             (System_String_o *)StringLiteral_15997/*"[-]"*/,
             0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, message);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11218/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  return System_String__Concat_62414484(
           (System_String_o *)StringLiteral_16102/*"[FFFF00]"*/,
           message,
           v12,
           (System_String_o *)StringLiteral_15997/*"[-]"*/,
           0LL);
}


void __fastcall RestrictionNotSatisfyWholeInfo__Awake(RestrictionNotSatisfyWholeInfo_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall RestrictionNotSatisfyWholeInfo__Init(
        RestrictionNotSatisfyWholeInfo_o *this,
        RestrictionWholeEntity_o *restrictionWholeEntity,
        PartyListViewItem_o *partyItem,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  RestrictionNotSatisfyWholeInfo_o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t v14; // w23
  char v15; // w25
  BalanceConfig_c *v16; // x0
  int32_t v17; // w22
  int32_t v18; // w29
  PartyOrganizationListViewItem_o *v19; // x24
  struct System_Int32_array *targetVals2; // x8
  ServantEntity_o *v21; // x25
  int32_t v22; // w26
  System_Int32_array *v23; // x0
  char v24; // w24
  int32_t v25; // w22
  char v26; // w24
  int32_t v27; // w27
  PartyOrganizationListViewItem_o *v28; // x23
  ServantEntity_o *servantEntity; // x24
  int32_t svtLimitCount; // w25
  System_Int32_array *Individuality; // x0
  char v32; // w23
  int32_t v33; // w8
  int32_t v34; // w22
  int32_t v35; // w24
  System_String_o *v36; // x0
  const MethodInfo *v37; // x3
  char v38; // w26
  int32_t v39; // w23
  char v40; // w25
  BalanceConfig_c *v41; // x0
  int32_t v42; // w22
  int32_t DeckMemberMax; // w29
  PartyOrganizationListViewItem_o *v44; // x24
  ServantEntity_o *v45; // x25
  int32_t v46; // w26
  System_Int32_array *v47; // x0
  int32_t v48; // w23
  BalanceConfig_c *v49; // x0
  PartyOrganizationListViewItem_o *v50; // x24
  ServantEntity_o *v51; // x25
  int32_t v52; // w26
  System_Int32_array *v53; // x0
  const MethodInfo *v54; // x3
  RestrictionNotSatisfyWholeInfo_o *v55; // x2
  bool v56; // w1
  int32_t v57; // w22
  int32_t v58; // w8
  System_String_o *v59; // x2
  const MethodInfo *v60; // x3
  RestrictionNotSatisfyWholeInfo_o *v61; // x0
  bool v62; // w1
  int32_t v63; // w22
  bool v64; // w21
  const MethodInfo *v66; // x3
  int32_t i; // w22
  int32_t v68; // w28
  PartyOrganizationListViewItem_o *v69; // x23
  ServantEntity_o *v70; // x24
  int32_t v71; // w25
  System_Int32_array *v72; // x0

  v7 = this;
  if ( (byte_4B12284 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, restrictionWholeEntity, partyItem);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v8, v9);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v10, v11);
    this = (RestrictionNotSatisfyWholeInfo_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    byte_4B12284 = 1;
  }
  if ( restrictionWholeEntity )
  {
    switch ( restrictionWholeEntity->fields.type )
    {
      case 1:
        v25 = 0;
        v26 = 1;
LABEL_20:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionWholeEntity);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v27 = *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL);
        if ( v25 >= v27 )
        {
          v32 = v26;
          goto LABEL_100;
        }
        if ( !partyItem )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v25, 0LL);
        if ( !this )
          break;
        v28 = (PartyOrganizationListViewItem_o *)this;
        if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
        {
LABEL_28:
          ++v25;
          goto LABEL_20;
        }
        servantEntity = v28->fields.servantEntity;
        svtLimitCount = v28->fields.svtLimitCount;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v28, 0LL);
        if ( !servantEntity )
          break;
        Individuality = ServantEntity__getIndividuality(servantEntity, svtLimitCount, (int32_t)this, 0LL);
        v26 = 0;
        v32 = 0;
        if ( RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, Individuality, 0LL) )
          goto LABEL_28;
LABEL_100:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        v38 = v25 >= v27;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_62420848(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_43/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( !v7 )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, (v25 < v27) | v32 & 1, (System_String_o *)this, v66);
        if ( (v32 & 1) != 0 )
          return 1;
        return v38 ^ 1;
      case 2:
        v33 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          v34 = v33;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionWholeEntity);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          v35 = *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL);
          if ( v34 >= v35 )
            goto LABEL_82;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v34, 0LL);
            if ( this )
            {
              v33 = v34 + 1;
              if ( BYTE5(this[5].fields.wholeInfoPrefixLabel) )
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
        v36 = System_String__Replace_62420848(
                (System_String_o *)this,
                (System_String_o *)StringLiteral_43/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, 0, v36, v37);
        v38 = 1;
        return v38 ^ 1;
      case 4:
        v39 = 0;
        v40 = 1;
        while ( 1 )
        {
          v41 = BalanceConfig_TypeInfo;
          v42 = v39;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionWholeEntity);
            v41 = BalanceConfig_TypeInfo;
          }
          DeckMemberMax = v41->static_fields->DeckMemberMax;
          if ( v39 >= DeckMemberMax )
            break;
          ++v39;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       v42 + 1,
                                                       (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_125;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v42, 0LL);
            if ( !this )
              goto LABEL_125;
            v44 = (PartyOrganizationListViewItem_o *)this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
            {
              v45 = v44->fields.servantEntity;
              v46 = v44->fields.svtLimitCount;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v44, 0LL);
              if ( !v45 )
                goto LABEL_125;
              v39 = v42 + 1;
              v47 = ServantEntity__getIndividuality(v45, v46, (int32_t)this, 0LL);
              v40 = 0;
              v24 = 0;
              if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v47, 0LL) )
                goto LABEL_94;
            }
          }
        }
        v24 = v40;
LABEL_94:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        v38 = v42 >= DeckMemberMax;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_62420848(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_43/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( !v7 )
          break;
        v55 = this;
        v56 = (v42 < DeckMemberMax) | v24 & 1;
        goto LABEL_97;
      case 5:
        v48 = 0;
        v15 = 1;
        while ( 1 )
        {
LABEL_51:
          v49 = BalanceConfig_TypeInfo;
          v17 = v48;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionWholeEntity);
            v49 = BalanceConfig_TypeInfo;
          }
          v18 = v49->static_fields->DeckMemberMax;
          if ( v48 >= v18 )
            goto LABEL_62;
          ++v48;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       v17 + 1,
                                                       (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_125;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v17, 0LL);
            if ( !this )
              goto LABEL_125;
            v50 = (PartyOrganizationListViewItem_o *)this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
              break;
          }
        }
        if ( v50->fields.isFollower )
          goto LABEL_124;
        v51 = v50->fields.servantEntity;
        v52 = v50->fields.svtLimitCount;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v50, 0LL);
        if ( v51 )
        {
          v48 = v17 + 1;
          v53 = ServantEntity__getIndividuality(v51, v52, (int32_t)this, 0LL);
          v15 = 0;
          v24 = 0;
          if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v53, 0LL) )
            goto LABEL_63;
          goto LABEL_51;
        }
        break;
      case 6:
      case 7:
        v14 = 0;
        v15 = 1;
        while ( 1 )
        {
LABEL_6:
          v16 = BalanceConfig_TypeInfo;
          v17 = v14;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionWholeEntity);
            v16 = BalanceConfig_TypeInfo;
          }
          v18 = v16->static_fields->DeckMemberMax;
          if ( v14 >= v18 )
          {
LABEL_62:
            v24 = v15;
            goto LABEL_63;
          }
          ++v14;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       v17 + 1,
                                                       (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_125;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v17, 0LL);
            if ( !this )
              goto LABEL_125;
            v19 = (PartyOrganizationListViewItem_o *)this;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                         (PartyOrganizationListViewItem_o *)this,
                                                         0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              break;
          }
        }
        targetVals2 = restrictionWholeEntity->fields.targetVals2;
        if ( !targetVals2 )
          break;
        if ( targetVals2->max_length != 1 || v19->fields.isFollower )
        {
          v21 = v19->fields.servantEntity;
          v22 = v19->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v19, 0LL);
          if ( !v21 )
            break;
          v14 = v17 + 1;
          v23 = ServantEntity__getIndividuality(v21, v22, (int32_t)this, 0LL);
          v15 = 0;
          v24 = 0;
          if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v23, 0LL) )
            goto LABEL_63;
          goto LABEL_6;
        }
LABEL_124:
        v24 = 0;
LABEL_63:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        v38 = v17 >= v18;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_62420848(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_43/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( !v7 )
          break;
        v55 = this;
        v56 = v24 & 1 | (v17 < v18);
LABEL_97:
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, v56, (System_String_o *)v55, v54);
        if ( (v24 & 1) != 0 )
          return 1;
        return v38 ^ 1;
      case 8:
        v57 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionWholeEntity);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v57 >= *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL) )
          {
            for ( i = 0; ; ++i )
            {
              if ( !LODWORD(this[4].klass) )
              {
                j_il2cpp_runtime_class_init_0(this, restrictionWholeEntity);
                this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
              }
              v68 = *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 160LL);
              v38 = i < v68;
              if ( i >= v68 )
                break;
              if ( !partyItem )
                goto LABEL_125;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, i, 0LL);
              if ( !this )
                goto LABEL_125;
              v69 = (PartyOrganizationListViewItem_o *)this;
              if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
              {
                v70 = v69->fields.servantEntity;
                v71 = v69->fields.svtLimitCount;
                this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(
                                                             v69,
                                                             0LL);
                if ( !v70 )
                  goto LABEL_125;
                v72 = ServantEntity__getIndividuality(v70, v71, (int32_t)this, 0LL);
                if ( RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v72, 0LL) )
                  break;
              }
              this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
            }
            v64 = i >= v68;
            goto LABEL_116;
          }
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v57, 0LL);
            if ( this )
            {
              if ( !BYTE5(this[3].fields.wholeInfoPrefixLabel) || !BYTE3(this[4].monitor) )
              {
                ++v57;
                continue;
              }
              v38 = 0;
              v64 = 1;
LABEL_116:
              this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
              if ( !this )
                goto LABEL_125;
LABEL_121:
              v59 = System_String__Replace_62420848(
                      (System_String_o *)this,
                      (System_String_o *)StringLiteral_43/*"\n"*/,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
              v61 = v7;
              v62 = v64;
LABEL_122:
              RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v61, v62, v59, v60);
              return v38 ^ 1;
            }
          }
          break;
        }
        break;
      case 9:
        v58 = 0;
LABEL_76:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        v34 = v58;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionWholeEntity);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v35 = *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL);
        if ( v34 >= v35 )
        {
LABEL_82:
          this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
          if ( !this )
            break;
          v38 = v34 >= v35;
          v59 = System_String__Replace_62420848(
                  (System_String_o *)this,
                  (System_String_o *)StringLiteral_43/*"\n"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
          v61 = v7;
          v62 = v34 < v35;
          goto LABEL_122;
        }
        if ( partyItem )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v34, 0LL);
          if ( this )
          {
            v58 = v34 + 1;
            if ( BYTE3(this[3].fields.wholeInfoPrefixLabel) )
              goto LABEL_82;
            goto LABEL_76;
          }
        }
        break;
      case 0xA:
        v63 = 0;
        while ( 1 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionWholeEntity);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v63 >= *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL) )
            break;
          if ( !partyItem )
            goto LABEL_125;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v63, 0LL);
          if ( !this )
            goto LABEL_125;
          if ( !BYTE6(this[5].fields.wholeInfoPrefixLabel) )
          {
            ++v63;
            if ( SLODWORD(this[5].fields.wholeInfoLabel) <= 0 )
              continue;
          }
          v64 = 1;
          goto LABEL_119;
        }
        v64 = 0;
LABEL_119:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        if ( !this )
          break;
        v38 = !v64;
        goto LABEL_121;
      default:
        return 1;
    }
  }
LABEL_125:
  sub_1BCAA3C(this, restrictionWholeEntity);
}


bool __fastcall RestrictionNotSatisfyWholeInfo__InitFatigue(
        RestrictionNotSatisfyWholeInfo_o *this,
        PartyListViewItem_o *partyItem,
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
  int32_t v13; // w8
  System_String_o *Member; // x0
  int32_t v15; // w21
  int32_t v16; // w27
  System_String_o *v17; // x0
  const MethodInfo *v18; // x3

  if ( (byte_4B12286 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, partyItem, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_11214/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B12286 = 1;
  }
  v13 = 0;
  do
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    v15 = v13;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, partyItem);
      Member = (System_String_o *)BalanceConfig_TypeInfo;
    }
    v16 = *(_DWORD *)(*(_QWORD *)&Member[7].fields + 156LL);
    if ( v15 >= v16 )
      break;
    if ( !partyItem )
      goto LABEL_14;
    Member = (System_String_o *)PartyListViewItem__GetMember(partyItem, v15, 0LL);
    if ( !Member )
      goto LABEL_14;
    v13 = v15 + 1;
  }
  while ( ((unsigned __int64)Member[10].klass & 0x8000000000000000LL) != 0 );
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, partyItem);
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_11214/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
  if ( !Member )
LABEL_14:
    sub_1BCAA3C(Member, partyItem);
  v17 = System_String__Replace_62420848(
          Member,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v15 < v16, v17, v18);
  return v15 < v16;
}


bool __fastcall RestrictionNotSatisfyWholeInfo__InitNotSingleSupportOnly(
        RestrictionNotSatisfyWholeInfo_o *this,
        PartyListViewItem_o *partyItem,
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
  int32_t v13; // w8
  System_String_o *Member; // x0
  int32_t v15; // w21
  int32_t v16; // w27
  System_String_o *v17; // x0
  const MethodInfo *v18; // x3

  if ( (byte_4B12287 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, partyItem, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_10419/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B12287 = 1;
  }
  v13 = 0;
  do
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    v15 = v13;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, partyItem);
      Member = (System_String_o *)BalanceConfig_TypeInfo;
    }
    v16 = *(_DWORD *)(*(_QWORD *)&Member[7].fields + 156LL);
    if ( v15 >= v16 )
      break;
    if ( !partyItem )
      goto LABEL_14;
    Member = (System_String_o *)PartyListViewItem__GetMember(partyItem, v15, 0LL);
    if ( !Member )
      goto LABEL_14;
    v13 = v15 + 1;
  }
  while ( !LOBYTE(Member[14].monitor) );
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, partyItem);
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_10419/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
  if ( !Member )
LABEL_14:
    sub_1BCAA3C(Member, partyItem);
  v17 = System_String__Replace_62420848(
          Member,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v15 < v16, v17, v18);
  return v15 < v16;
}


bool __fastcall RestrictionNotSatisfyWholeInfo__InitUniqueServant(
        RestrictionNotSatisfyWholeInfo_o *this,
        PartyListViewItem_o *partyItem,
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
  int32_t v13; // w8
  System_String_o *Member; // x0
  int32_t v15; // w21
  int32_t v16; // w27
  System_String_o *v17; // x0
  const MethodInfo *v18; // x3

  if ( (byte_4B12285 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, partyItem, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_11217/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B12285 = 1;
  }
  v13 = 0;
  do
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    v15 = v13;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, partyItem);
      Member = (System_String_o *)BalanceConfig_TypeInfo;
    }
    v16 = *(_DWORD *)(*(_QWORD *)&Member[7].fields + 156LL);
    if ( v15 >= v16 )
      break;
    if ( !partyItem )
      goto LABEL_14;
    Member = (System_String_o *)PartyListViewItem__GetMember(partyItem, v15, 0LL);
    if ( !Member )
      goto LABEL_14;
    v13 = v15 + 1;
  }
  while ( !BYTE2(Member[8].fields._stringLength) );
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, partyItem);
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_11217/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0LL);
  if ( !Member )
LABEL_14:
    sub_1BCAA3C(Member, partyItem);
  v17 = System_String__Replace_62420848(
          Member,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v15 < v16, v17, v18);
  return v15 < v16;
}


bool __fastcall RestrictionNotSatisfyWholeInfo__Init_33007708(
        RestrictionNotSatisfyWholeInfo_o *this,
        RestrictionEntity_o *restrictionEntity,
        PartyListViewItem_o *partyItem,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  RestrictionNotSatisfyWholeInfo_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  char v15; // w8
  struct System_Int32_array *targetVals2; // x8
  System_String_o *name; // x8
  char v18; // w20
  char IsSearchVals_40304544; // w22
  System_String_o *v20; // x2
  const MethodInfo *v21; // x3
  char v22; // w1
  int32_t v23; // w22
  char v24; // w24
  int32_t v25; // w27
  PartyOrganizationListViewItem_o *v26; // x23
  ServantEntity_o *servantEntity; // x24
  int32_t svtLimitCount; // w25
  System_Int32_array *Individuality; // x0
  char v30; // w23
  int32_t v31; // w8
  int32_t v32; // w22
  int32_t v33; // w24
  int v34; // w23
  char v35; // w25
  BalanceConfig_c *v36; // x0
  int32_t v37; // w22
  RestrictionNotSatisfyWholeInfo_o *v38; // x24
  struct System_Int32_array *targetVals; // x8
  const MethodInfo *v40; // x3
  int32_t v41; // w22
  char v42; // w24
  PartyOrganizationListViewItem_o *v43; // x23
  ServantEntity_o *v44; // x24
  int32_t v45; // w25
  System_Int32_array *v46; // x0
  PartyOrganizationListViewItem_o *v47; // x22
  bool IsEmpty; // w21
  char v49; // w23
  int32_t v50; // w23
  int v51; // w24
  int32_t v52; // w22
  RestrictionNotSatisfyWholeInfo_o *v53; // x23
  int32_t v54; // w8
  int32_t v55; // w22
  int32_t v56; // w8
  bool v57; // cc
  char v58; // w20
  RestrictionNotSatisfyWholeInfo_o *v59; // x0
  int32_t v60; // w22
  bool v61; // w21
  struct System_Int32_array *v62; // x8
  char v63; // w20
  const MethodInfo *v64; // x3
  int32_t i; // w23
  int32_t v66; // w28
  PartyOrganizationListViewItem_o *v67; // x24
  ServantEntity_o *v68; // x25
  int32_t v69; // w26
  System_Int32_array *v70; // x0
  const MethodInfo *v72; // x3
  ServantEntity_o *v73; // x23
  int32_t v74; // w24
  System_Int32_array *v75; // x0
  const MethodInfo *v76; // x3

  v8 = this;
  if ( (byte_4B12288 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, restrictionEntity, partyItem);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v9, v10);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v11, v12);
    this = (RestrictionNotSatisfyWholeInfo_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B12288 = 1;
  }
  if ( !restrictionEntity )
    goto LABEL_171;
  v15 = 1;
  switch ( restrictionEntity->fields.type )
  {
    case 1:
      v23 = 0;
      v24 = 1;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v25 = *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL);
        if ( v23 >= v25 )
        {
          v30 = v24;
        }
        else
        {
          if ( !partyItem )
            goto LABEL_171;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v23, 0LL);
          if ( !this )
            goto LABEL_171;
          v26 = (PartyOrganizationListViewItem_o *)this;
          if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
          {
LABEL_20:
            ++v23;
            continue;
          }
          servantEntity = v26->fields.servantEntity;
          svtLimitCount = v26->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v26, 0LL);
          if ( !servantEntity )
            goto LABEL_171;
          Individuality = ServantEntity__getIndividuality(servantEntity, svtLimitCount, (int32_t)this, 0LL);
          v24 = 0;
          v30 = 0;
          if ( !RestrictionEntity__IsRestriction_40304868(restrictionEntity, Individuality, 0LL) )
            goto LABEL_20;
        }
        break;
      }
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      v57 = v23 < v25;
      IsSearchVals_40304544 = v23 >= v25;
      v63 = v57;
      if ( this )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_62420848(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_43/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( v8 )
        {
          RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v8, v63 | v30 & 1, (System_String_o *)this, v64);
          if ( (v30 & 1) == 0 )
            goto LABEL_154;
LABEL_169:
          v15 = 1;
          return v15 & 1;
        }
      }
LABEL_171:
      sub_1BCAA3C(this, restrictionEntity);
    case 6:
      v31 = 0;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        v32 = v31;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v33 = *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL);
        if ( v32 >= v33 )
          goto LABEL_100;
        if ( partyItem )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v32, 0LL);
          if ( this )
          {
            v31 = v32 + 1;
            if ( BYTE2(this[3].fields.wholeInfoPrefixLabel) )
              goto LABEL_100;
            continue;
          }
        }
        goto LABEL_171;
      }
    case 7:
      v34 = 0;
      v35 = 1;
      while ( 1 )
      {
LABEL_30:
        v36 = BalanceConfig_TypeInfo;
        v37 = v34;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity);
          v36 = BalanceConfig_TypeInfo;
        }
        if ( v34 >= v36->static_fields->DeckMemberMax )
        {
LABEL_40:
          IsSearchVals_40304544 = 1;
          goto LABEL_41;
        }
        ++v34;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)restrictionEntity->fields.targetVals,
                                                     v37 + 1,
                                                     (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !partyItem )
            goto LABEL_171;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v37, 0LL);
          if ( !this )
            goto LABEL_171;
          v38 = this;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                       (PartyOrganizationListViewItem_o *)this,
                                                       0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            break;
        }
      }
      targetVals = restrictionEntity->fields.targetVals;
      if ( !targetVals )
        goto LABEL_171;
      if ( targetVals->max_length != 1 )
      {
        v35 = 0;
        v34 = v37 + 1;
        if ( LOBYTE(v38[2].fields.m_CachedPtr) )
          goto LABEL_40;
        goto LABEL_30;
      }
      v35 = 0;
      IsSearchVals_40304544 = LOBYTE(v38[2].fields.m_CachedPtr) != 0;
LABEL_41:
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
      this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_62420848(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                                   (System_String_o *)StringLiteral_1/*""*/,
                                                   0LL);
      if ( !v8 )
        goto LABEL_171;
      RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
        v8,
        v35 & 1 | IsSearchVals_40304544 ^ 1,
        (System_String_o *)this,
        v40);
      if ( (v35 & 1) == 0 )
        goto LABEL_154;
      goto LABEL_169;
    case 8:
      v41 = 0;
      v42 = 1;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v41 >= *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 160LL) )
          goto LABEL_157;
        if ( !partyItem )
          goto LABEL_171;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v41, 0LL);
        if ( !this )
          goto LABEL_171;
        v43 = (PartyOrganizationListViewItem_o *)this;
        if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
          goto LABEL_55;
        if ( v43->fields.isFollower )
        {
          v42 = 0;
LABEL_157:
          IsSearchVals_40304544 = 0;
        }
        else
        {
          v44 = v43->fields.servantEntity;
          v45 = v43->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v43, 0LL);
          if ( !v44 )
            goto LABEL_171;
          v46 = ServantEntity__getIndividuality(v44, v45, (int32_t)this, 0LL);
          v42 = 0;
          if ( !RestrictionEntity__IsSearchVals_40304544(restrictionEntity, v46, 0LL) )
          {
LABEL_55:
            ++v41;
            continue;
          }
          IsSearchVals_40304544 = 1;
        }
        break;
      }
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
      this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_62420848(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                                   (System_String_o *)StringLiteral_1/*""*/,
                                                   0LL);
      if ( !v8 )
        goto LABEL_171;
      RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
        v8,
        v42 & 1 | IsSearchVals_40304544 ^ 1,
        (System_String_o *)this,
        v72);
      if ( (v42 & 1) != 0 )
        goto LABEL_169;
      goto LABEL_154;
    case 9:
      if ( !partyItem )
        goto LABEL_171;
      this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, 0, 0LL);
      if ( !this )
        goto LABEL_171;
      v47 = (PartyOrganizationListViewItem_o *)this;
      IsEmpty = PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL);
      if ( IsEmpty )
      {
        IsSearchVals_40304544 = 0;
        v49 = 1;
      }
      else
      {
        if ( v47->fields.isFollower )
        {
          IsSearchVals_40304544 = 0;
        }
        else
        {
          v73 = v47->fields.servantEntity;
          v74 = v47->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v47, 0LL);
          if ( !v73 )
            goto LABEL_171;
          v75 = ServantEntity__getIndividuality(v73, v74, (int32_t)this, 0LL);
          IsSearchVals_40304544 = RestrictionEntity__IsSearchVals_40304544(restrictionEntity, v75, 0LL);
        }
        v49 = IsSearchVals_40304544 ^ 1;
      }
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
      this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_62420848(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                                   (System_String_o *)StringLiteral_1/*""*/,
                                                   0LL);
      if ( !v8 )
        goto LABEL_171;
      RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v8, v49 & 1, (System_String_o *)this, v76);
      if ( IsEmpty )
        goto LABEL_169;
      goto LABEL_154;
    case 0xA:
      v50 = 0;
      v51 = 0;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v50 < *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL) )
        {
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v50, 0LL);
            if ( this )
            {
              v51 += !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL);
              ++v50;
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
        v62 = restrictionEntity->fields.targetVals;
        if ( !v62 )
          goto LABEL_171;
        if ( !v62->max_length )
LABEL_172:
          sub_1BCAA44(this, restrictionEntity);
        IsSearchVals_40304544 = v51 == v62->m_Items[1];
      }
      else
      {
LABEL_120:
        IsSearchVals_40304544 = 1;
      }
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
      v20 = System_String__Replace_62420848(
              (System_String_o *)this,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      v22 = IsSearchVals_40304544 ^ 1;
LABEL_123:
      v59 = v8;
      goto LABEL_153;
    case 0xB:
      v52 = 0;
      v51 = 0;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v52 >= *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL) )
          goto LABEL_116;
        if ( partyItem )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v52, 0LL);
          if ( this )
          {
            v53 = this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
              v51 += LOBYTE(v53[2].fields.m_CachedPtr) ^ 1;
            ++v52;
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
      if ( !targetVals2->max_length )
        goto LABEL_172;
      if ( !partyItem )
        goto LABEL_171;
      this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(
                                                   partyItem,
                                                   targetVals2->m_Items[1] - 1,
                                                   0LL);
      if ( !this )
        goto LABEL_171;
      this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                   (PartyOrganizationListViewItem_o *)this,
                                                   0LL);
      name = restrictionEntity->fields.name;
      if ( !name )
        goto LABEL_171;
      v18 = (char)this;
      IsSearchVals_40304544 = (unsigned __int8)this ^ 1;
      v20 = System_String__Replace_62420848(
              name,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      v22 = v18 & 1;
      goto LABEL_123;
    case 0xD:
      v54 = 0;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        v32 = v54;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v33 = *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL);
        if ( v32 >= v33 )
          goto LABEL_100;
        if ( partyItem )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v32, 0LL);
          if ( this )
          {
            v54 = v32 + 1;
            if ( BYTE5(this[5].fields.wholeInfoPrefixLabel) )
              goto LABEL_100;
            continue;
          }
        }
        goto LABEL_171;
      }
    case 0xE:
      v55 = 0;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v55 >= *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL) )
        {
          for ( i = 0; ; ++i )
          {
            if ( !LODWORD(this[4].klass) )
            {
              j_il2cpp_runtime_class_init_0(this, restrictionEntity);
              this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
            }
            v66 = *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 160LL);
            IsSearchVals_40304544 = i < v66;
            if ( i >= v66 )
              break;
            if ( !partyItem )
              goto LABEL_171;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, i, 0LL);
            if ( !this )
              goto LABEL_171;
            v67 = (PartyOrganizationListViewItem_o *)this;
            if ( BYTE5(this[3].fields.wholeInfoPrefixLabel)
              && !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
            {
              v68 = v67->fields.servantEntity;
              v69 = v67->fields.svtLimitCount;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v67, 0LL);
              if ( !v68 )
                goto LABEL_171;
              v70 = ServantEntity__getIndividuality(v68, v69, (int32_t)this, 0LL);
              if ( RestrictionEntity__IsSearchVals_40304544(restrictionEntity, v70, 0LL) )
                break;
            }
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          v61 = i >= v66;
        }
        else
        {
          if ( !partyItem )
            goto LABEL_171;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v55, 0LL);
          if ( !this )
            goto LABEL_171;
          if ( !BYTE5(this[3].fields.wholeInfoPrefixLabel) || !BYTE3(this[4].monitor) )
          {
            ++v55;
            continue;
          }
          IsSearchVals_40304544 = 0;
          v61 = 1;
        }
        break;
      }
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
LABEL_152:
      v20 = System_String__Replace_62420848(
              (System_String_o *)this,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      v59 = v8;
      v22 = v61;
      goto LABEL_153;
    case 0xF:
      v56 = 0;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        v32 = v56;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v33 = *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL);
        if ( v32 < v33 )
        {
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v32, 0LL);
            if ( this )
            {
              v56 = v32 + 1;
              if ( BYTE3(this[3].fields.wholeInfoPrefixLabel) )
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
      v57 = v32 < v33;
      IsSearchVals_40304544 = v32 >= v33;
      v58 = v57;
      v20 = System_String__Replace_62420848(
              (System_String_o *)this,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      v59 = v8;
      v22 = v58;
LABEL_153:
      RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v59, v22, v20, v21);
LABEL_154:
      v15 = IsSearchVals_40304544 ^ 1;
      return v15 & 1;
    case 0x11:
      v60 = 0;
      while ( 1 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionEntity);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v60 >= *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL) )
          break;
        if ( !partyItem )
          goto LABEL_171;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v60, 0LL);
        if ( !this )
          goto LABEL_171;
        if ( !BYTE6(this[5].fields.wholeInfoPrefixLabel) )
        {
          ++v60;
          if ( SLODWORD(this[5].fields.wholeInfoLabel) <= 0 )
            continue;
        }
        v61 = 1;
        goto LABEL_150;
      }
      v61 = 0;
LABEL_150:
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
      IsSearchVals_40304544 = !v61;
      goto LABEL_152;
    default:
      return v15 & 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
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

  if ( (byte_4B12289 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_25580/*"・"*/, isWarning, message);
    byte_4B12289 = 1;
  }
  notSatisfySprite = (UnityEngine_Component_o *)this->fields.notSatisfySprite;
  if ( !notSatisfySprite )
    goto LABEL_13;
  notSatisfySprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(notSatisfySprite, 0LL);
  if ( !notSatisfySprite )
    goto LABEL_13;
  if ( !isWarning )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)notSatisfySprite, 0, 0LL);
    notSatisfySprite = (UnityEngine_Component_o *)this->fields.wholeInfoPrefixLabel;
    if ( notSatisfySprite )
    {
      UILabel__set_text((UILabel_o *)notSatisfySprite, (System_String_o *)StringLiteral_25580/*"・"*/, 0LL);
      notSatisfySprite = (UnityEngine_Component_o *)this->fields.wholeInfoLabel;
      if ( notSatisfySprite )
      {
        v14 = message;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_1BCAA3C(notSatisfySprite, isWarning);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)notSatisfySprite, 1, 0LL);
  wholeInfoPrefixLabel = this->fields.wholeInfoPrefixLabel;
  notSatisfySprite = (UnityEngine_Component_o *)RestrictionNotSatisfyWholeInfo__AddColorCodeAndFixMessage(
                                                  v9,
                                                  (System_String_o *)StringLiteral_25580/*"・"*/,
                                                  0,
                                                  v10);
  if ( !wholeInfoPrefixLabel )
    goto LABEL_13;
  UILabel__set_text(wholeInfoPrefixLabel, (System_String_o *)notSatisfySprite, 0LL);
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
  UILabel__set_text((UILabel_o *)notSatisfySprite, v14, 0LL);
}