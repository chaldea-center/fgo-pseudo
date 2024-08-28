void __fastcall RestrictionNotSatisfyWholeInfo___ctor(RestrictionNotSatisfyWholeInfo_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall RestrictionNotSatisfyWholeInfo__AddColorCodeAndFixMessage(
        RestrictionNotSatisfyWholeInfo_o *this,
        System_String_o *message,
        bool isAddFixMessage,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *v9; // x0

  if ( (byte_4A04DDC & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, message);
    sub_1B686D4(&StringLiteral_15765/*"[-]"*/, v6);
    sub_1B686D4(&StringLiteral_11033/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v7);
    sub_1B686D4(&StringLiteral_15870/*"[FFFF00]"*/, v8);
    byte_4A04DDC = 1;
  }
  if ( !isAddFixMessage )
    return System_String__Concat_61430728(
             (System_String_o *)StringLiteral_15870/*"[FFFF00]"*/,
             message,
             (System_String_o *)StringLiteral_15765/*"[-]"*/,
             0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11033/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  return System_String__Concat_61432732(
           (System_String_o *)StringLiteral_15870/*"[FFFF00]"*/,
           message,
           v9,
           (System_String_o *)StringLiteral_15765/*"[-]"*/,
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
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v11; // w23
  char v12; // w25
  BalanceConfig_c *v13; // x0
  int32_t v14; // w22
  int32_t v15; // w29
  PartyOrganizationListViewItem_o *v16; // x24
  struct System_Int32_array *targetVals2; // x8
  ServantEntity_o *v18; // x25
  int32_t v19; // w26
  System_Int32_array *v20; // x0
  char v21; // w24
  int32_t v22; // w22
  char v23; // w24
  int32_t v24; // w27
  PartyOrganizationListViewItem_o *v25; // x23
  ServantEntity_o *servantEntity; // x24
  int32_t svtLimitCount; // w25
  System_Int32_array *Individuality; // x0
  char v29; // w23
  int32_t v30; // w8
  int32_t v31; // w22
  int32_t v32; // w24
  System_String_o *v33; // x0
  const MethodInfo *v34; // x3
  char v35; // w26
  int32_t v36; // w23
  char v37; // w25
  BalanceConfig_c *v38; // x0
  int32_t v39; // w22
  int32_t DeckMemberMax; // w29
  PartyOrganizationListViewItem_o *v41; // x24
  ServantEntity_o *v42; // x25
  int32_t v43; // w26
  System_Int32_array *v44; // x0
  int32_t v45; // w23
  BalanceConfig_c *v46; // x0
  PartyOrganizationListViewItem_o *v47; // x24
  ServantEntity_o *v48; // x25
  int32_t v49; // w26
  System_Int32_array *v50; // x0
  const MethodInfo *v51; // x3
  RestrictionNotSatisfyWholeInfo_o *v52; // x2
  bool v53; // w1
  int32_t v54; // w22
  int32_t v55; // w8
  System_String_o *v56; // x2
  const MethodInfo *v57; // x3
  RestrictionNotSatisfyWholeInfo_o *v58; // x0
  bool v59; // w1
  int32_t v60; // w22
  bool v61; // w21
  const MethodInfo *v63; // x3
  int32_t i; // w22
  int32_t v65; // w28
  PartyOrganizationListViewItem_o *v66; // x23
  ServantEntity_o *v67; // x24
  int32_t v68; // w25
  System_Int32_array *v69; // x0

  v7 = this;
  if ( (byte_4A04DD6 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, restrictionWholeEntity);
    sub_1B686D4(&Method_System_Linq_Enumerable_Contains_int___, v8);
    sub_1B686D4(&StringLiteral_43/*"\n"*/, v9);
    this = (RestrictionNotSatisfyWholeInfo_o *)sub_1B686D4(&StringLiteral_1/*""*/, v10);
    byte_4A04DD6 = 1;
  }
  if ( restrictionWholeEntity )
  {
    switch ( restrictionWholeEntity->fields.type )
    {
      case 1:
        v22 = 0;
        v23 = 1;
LABEL_20:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v24 = *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL);
        if ( v22 >= v24 )
        {
          v29 = v23;
          goto LABEL_100;
        }
        if ( !partyItem )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v22, 0LL);
        if ( !this )
          break;
        v25 = (PartyOrganizationListViewItem_o *)this;
        if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
        {
LABEL_28:
          ++v22;
          goto LABEL_20;
        }
        servantEntity = v25->fields.servantEntity;
        svtLimitCount = v25->fields.svtLimitCount;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v25, 0LL);
        if ( !servantEntity )
          break;
        Individuality = ServantEntity__getIndividuality(servantEntity, svtLimitCount, (int32_t)this, 0LL);
        v23 = 0;
        v29 = 0;
        if ( RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, Individuality, 0LL) )
          goto LABEL_28;
LABEL_100:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        v35 = v22 >= v24;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_61439096(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_43/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( !v7 )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, (v22 < v24) | v29 & 1, (System_String_o *)this, v63);
        if ( (v29 & 1) != 0 )
          return 1;
        return v35 ^ 1;
      case 2:
        v30 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          v31 = v30;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          v32 = *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL);
          if ( v31 >= v32 )
            goto LABEL_82;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v31, 0LL);
            if ( this )
            {
              v30 = v31 + 1;
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
        v33 = System_String__Replace_61439096(
                (System_String_o *)this,
                (System_String_o *)StringLiteral_43/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, 0, v33, v34);
        v35 = 1;
        return v35 ^ 1;
      case 4:
        v36 = 0;
        v37 = 1;
        while ( 1 )
        {
          v38 = BalanceConfig_TypeInfo;
          v39 = v36;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v38 = BalanceConfig_TypeInfo;
          }
          DeckMemberMax = v38->static_fields->DeckMemberMax;
          if ( v36 >= DeckMemberMax )
            break;
          ++v36;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       v39 + 1,
                                                       (const MethodInfo_2E63938 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_125;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v39, 0LL);
            if ( !this )
              goto LABEL_125;
            v41 = (PartyOrganizationListViewItem_o *)this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
            {
              v42 = v41->fields.servantEntity;
              v43 = v41->fields.svtLimitCount;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v41, 0LL);
              if ( !v42 )
                goto LABEL_125;
              v36 = v39 + 1;
              v44 = ServantEntity__getIndividuality(v42, v43, (int32_t)this, 0LL);
              v37 = 0;
              v21 = 0;
              if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v44, 0LL) )
                goto LABEL_94;
            }
          }
        }
        v21 = v37;
LABEL_94:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        v35 = v39 >= DeckMemberMax;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_61439096(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_43/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( !v7 )
          break;
        v52 = this;
        v53 = (v39 < DeckMemberMax) | v21 & 1;
        goto LABEL_97;
      case 5:
        v45 = 0;
        v12 = 1;
        while ( 1 )
        {
LABEL_51:
          v46 = BalanceConfig_TypeInfo;
          v14 = v45;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v46 = BalanceConfig_TypeInfo;
          }
          v15 = v46->static_fields->DeckMemberMax;
          if ( v45 >= v15 )
            goto LABEL_62;
          ++v45;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       v14 + 1,
                                                       (const MethodInfo_2E63938 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_125;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v14, 0LL);
            if ( !this )
              goto LABEL_125;
            v47 = (PartyOrganizationListViewItem_o *)this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
              break;
          }
        }
        if ( v47->fields.isFollower )
          goto LABEL_124;
        v48 = v47->fields.servantEntity;
        v49 = v47->fields.svtLimitCount;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v47, 0LL);
        if ( v48 )
        {
          v45 = v14 + 1;
          v50 = ServantEntity__getIndividuality(v48, v49, (int32_t)this, 0LL);
          v12 = 0;
          v21 = 0;
          if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v50, 0LL) )
            goto LABEL_63;
          goto LABEL_51;
        }
        break;
      case 6:
      case 7:
        v11 = 0;
        v12 = 1;
        while ( 1 )
        {
LABEL_6:
          v13 = BalanceConfig_TypeInfo;
          v14 = v11;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v13 = BalanceConfig_TypeInfo;
          }
          v15 = v13->static_fields->DeckMemberMax;
          if ( v11 >= v15 )
          {
LABEL_62:
            v21 = v12;
            goto LABEL_63;
          }
          ++v11;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       v14 + 1,
                                                       (const MethodInfo_2E63938 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_125;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v14, 0LL);
            if ( !this )
              goto LABEL_125;
            v16 = (PartyOrganizationListViewItem_o *)this;
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
        if ( targetVals2->max_length != 1 || v16->fields.isFollower )
        {
          v18 = v16->fields.servantEntity;
          v19 = v16->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v16, 0LL);
          if ( !v18 )
            break;
          v11 = v14 + 1;
          v20 = ServantEntity__getIndividuality(v18, v19, (int32_t)this, 0LL);
          v12 = 0;
          v21 = 0;
          if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v20, 0LL) )
            goto LABEL_63;
          goto LABEL_6;
        }
LABEL_124:
        v21 = 0;
LABEL_63:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        v35 = v14 >= v15;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_61439096(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_43/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( !v7 )
          break;
        v52 = this;
        v53 = v21 & 1 | (v14 < v15);
LABEL_97:
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, v53, (System_String_o *)v52, v51);
        if ( (v21 & 1) != 0 )
          return 1;
        return v35 ^ 1;
      case 8:
        v54 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v54 >= *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL) )
          {
            for ( i = 0; ; ++i )
            {
              if ( !LODWORD(this[4].klass) )
              {
                j_il2cpp_runtime_class_init_0(this);
                this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
              }
              v65 = *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 160LL);
              v35 = i < v65;
              if ( i >= v65 )
                break;
              if ( !partyItem )
                goto LABEL_125;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, i, 0LL);
              if ( !this )
                goto LABEL_125;
              v66 = (PartyOrganizationListViewItem_o *)this;
              if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
              {
                v67 = v66->fields.servantEntity;
                v68 = v66->fields.svtLimitCount;
                this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(
                                                             v66,
                                                             0LL);
                if ( !v67 )
                  goto LABEL_125;
                v69 = ServantEntity__getIndividuality(v67, v68, (int32_t)this, 0LL);
                if ( RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v69, 0LL) )
                  break;
              }
              this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
            }
            v61 = i >= v65;
            goto LABEL_116;
          }
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v54, 0LL);
            if ( this )
            {
              if ( !BYTE5(this[3].fields.wholeInfoPrefixLabel) || !BYTE3(this[4].monitor) )
              {
                ++v54;
                continue;
              }
              v35 = 0;
              v61 = 1;
LABEL_116:
              this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
              if ( !this )
                goto LABEL_125;
LABEL_121:
              v56 = System_String__Replace_61439096(
                      (System_String_o *)this,
                      (System_String_o *)StringLiteral_43/*"\n"*/,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
              v58 = v7;
              v59 = v61;
LABEL_122:
              RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v58, v59, v56, v57);
              return v35 ^ 1;
            }
          }
          break;
        }
        break;
      case 9:
        v55 = 0;
LABEL_76:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        v31 = v55;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v32 = *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL);
        if ( v31 >= v32 )
        {
LABEL_82:
          this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
          if ( !this )
            break;
          v35 = v31 >= v32;
          v56 = System_String__Replace_61439096(
                  (System_String_o *)this,
                  (System_String_o *)StringLiteral_43/*"\n"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
          v58 = v7;
          v59 = v31 < v32;
          goto LABEL_122;
        }
        if ( partyItem )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v31, 0LL);
          if ( this )
          {
            v55 = v31 + 1;
            if ( BYTE3(this[3].fields.wholeInfoPrefixLabel) )
              goto LABEL_82;
            goto LABEL_76;
          }
        }
        break;
      case 0xA:
        v60 = 0;
        while ( 1 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v60 >= *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL) )
            break;
          if ( !partyItem )
            goto LABEL_125;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v60, 0LL);
          if ( !this )
            goto LABEL_125;
          if ( !BYTE6(this[5].fields.wholeInfoPrefixLabel) )
          {
            ++v60;
            if ( SLODWORD(this[5].fields.wholeInfoLabel) <= 0 )
              continue;
          }
          v61 = 1;
          goto LABEL_119;
        }
        v61 = 0;
LABEL_119:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        if ( !this )
          break;
        v35 = !v61;
        goto LABEL_121;
      default:
        return 1;
    }
  }
LABEL_125:
  sub_1B68930(this, restrictionWholeEntity);
}


bool __fastcall RestrictionNotSatisfyWholeInfo__InitFatigue(
        RestrictionNotSatisfyWholeInfo_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w8
  System_String_o *Member; // x0
  int32_t v11; // w21
  int32_t v12; // w27
  System_String_o *v13; // x0
  const MethodInfo *v14; // x3

  if ( (byte_4A04DD8 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, partyItem);
    sub_1B686D4(&LocalizationManager_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_43/*"\n"*/, v6);
    sub_1B686D4(&StringLiteral_11029/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, v7);
    sub_1B686D4(&StringLiteral_1/*""*/, v8);
    byte_4A04DD8 = 1;
  }
  v9 = 0;
  do
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    v11 = v9;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (System_String_o *)BalanceConfig_TypeInfo;
    }
    v12 = *(_DWORD *)(*(_QWORD *)&Member[7].fields + 156LL);
    if ( v11 >= v12 )
      break;
    if ( !partyItem )
      goto LABEL_14;
    Member = (System_String_o *)PartyListViewItem__GetMember(partyItem, v11, 0LL);
    if ( !Member )
      goto LABEL_14;
    v9 = v11 + 1;
  }
  while ( ((unsigned __int64)Member[10].klass & 0x8000000000000000LL) != 0 );
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_11029/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
  if ( !Member )
LABEL_14:
    sub_1B68930(Member, partyItem);
  v13 = System_String__Replace_61439096(
          Member,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v11 < v12, v13, v14);
  return v11 < v12;
}


bool __fastcall RestrictionNotSatisfyWholeInfo__InitNotSingleSupportOnly(
        RestrictionNotSatisfyWholeInfo_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w8
  System_String_o *Member; // x0
  int32_t v11; // w21
  int32_t v12; // w27
  System_String_o *v13; // x0
  const MethodInfo *v14; // x3

  if ( (byte_4A04DD9 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, partyItem);
    sub_1B686D4(&LocalizationManager_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_43/*"\n"*/, v6);
    sub_1B686D4(&StringLiteral_10241/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v7);
    sub_1B686D4(&StringLiteral_1/*""*/, v8);
    byte_4A04DD9 = 1;
  }
  v9 = 0;
  do
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    v11 = v9;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (System_String_o *)BalanceConfig_TypeInfo;
    }
    v12 = *(_DWORD *)(*(_QWORD *)&Member[7].fields + 156LL);
    if ( v11 >= v12 )
      break;
    if ( !partyItem )
      goto LABEL_14;
    Member = (System_String_o *)PartyListViewItem__GetMember(partyItem, v11, 0LL);
    if ( !Member )
      goto LABEL_14;
    v9 = v11 + 1;
  }
  while ( !LOBYTE(Member[14].monitor) );
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_10241/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
  if ( !Member )
LABEL_14:
    sub_1B68930(Member, partyItem);
  v13 = System_String__Replace_61439096(
          Member,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v11 < v12, v13, v14);
  return v11 < v12;
}


bool __fastcall RestrictionNotSatisfyWholeInfo__InitUniqueServant(
        RestrictionNotSatisfyWholeInfo_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w8
  System_String_o *Member; // x0
  int32_t v11; // w21
  int32_t v12; // w27
  System_String_o *v13; // x0
  const MethodInfo *v14; // x3

  if ( (byte_4A04DD7 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, partyItem);
    sub_1B686D4(&LocalizationManager_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_43/*"\n"*/, v6);
    sub_1B686D4(&StringLiteral_11032/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, v7);
    sub_1B686D4(&StringLiteral_1/*""*/, v8);
    byte_4A04DD7 = 1;
  }
  v9 = 0;
  do
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    v11 = v9;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (System_String_o *)BalanceConfig_TypeInfo;
    }
    v12 = *(_DWORD *)(*(_QWORD *)&Member[7].fields + 156LL);
    if ( v11 >= v12 )
      break;
    if ( !partyItem )
      goto LABEL_14;
    Member = (System_String_o *)PartyListViewItem__GetMember(partyItem, v11, 0LL);
    if ( !Member )
      goto LABEL_14;
    v9 = v11 + 1;
  }
  while ( !BYTE2(Member[8].fields._stringLength) );
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_11032/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0LL);
  if ( !Member )
LABEL_14:
    sub_1B68930(Member, partyItem);
  v13 = System_String__Replace_61439096(
          Member,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v11 < v12, v13, v14);
  return v11 < v12;
}


bool __fastcall RestrictionNotSatisfyWholeInfo__Init_32116144(
        RestrictionNotSatisfyWholeInfo_o *this,
        RestrictionEntity_o *restrictionEntity,
        PartyListViewItem_o *partyItem,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  RestrictionNotSatisfyWholeInfo_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  char v12; // w8
  struct System_Int32_array *targetVals2; // x8
  System_String_o *name; // x8
  char v15; // w20
  char IsSearchVals_39318740; // w22
  System_String_o *v17; // x2
  const MethodInfo *v18; // x3
  char v19; // w1
  int32_t v20; // w22
  char v21; // w24
  int32_t v22; // w27
  PartyOrganizationListViewItem_o *v23; // x23
  ServantEntity_o *servantEntity; // x24
  int32_t svtLimitCount; // w25
  System_Int32_array *Individuality; // x0
  char v27; // w23
  int32_t v28; // w8
  int32_t v29; // w22
  int32_t v30; // w24
  int v31; // w23
  char v32; // w25
  BalanceConfig_c *v33; // x0
  int32_t v34; // w22
  RestrictionNotSatisfyWholeInfo_o *v35; // x24
  struct System_Int32_array *targetVals; // x8
  const MethodInfo *v37; // x3
  int32_t v38; // w22
  char v39; // w24
  PartyOrganizationListViewItem_o *v40; // x23
  ServantEntity_o *v41; // x24
  int32_t v42; // w25
  System_Int32_array *v43; // x0
  PartyOrganizationListViewItem_o *v44; // x22
  bool IsEmpty; // w21
  char v46; // w23
  int32_t v47; // w23
  int v48; // w24
  int32_t v49; // w22
  RestrictionNotSatisfyWholeInfo_o *v50; // x23
  int32_t v51; // w8
  int32_t v52; // w22
  int32_t v53; // w8
  bool v54; // cc
  char v55; // w20
  RestrictionNotSatisfyWholeInfo_o *v56; // x0
  int32_t v57; // w22
  bool v58; // w21
  struct System_Int32_array *v59; // x8
  char v60; // w20
  const MethodInfo *v61; // x3
  int32_t i; // w23
  int32_t v63; // w28
  PartyOrganizationListViewItem_o *v64; // x24
  ServantEntity_o *v65; // x25
  int32_t v66; // w26
  System_Int32_array *v67; // x0
  const MethodInfo *v69; // x3
  ServantEntity_o *v70; // x23
  int32_t v71; // w24
  System_Int32_array *v72; // x0
  const MethodInfo *v73; // x3

  v8 = this;
  if ( (byte_4A04DDA & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, restrictionEntity);
    sub_1B686D4(&Method_System_Linq_Enumerable_Contains_int___, v9);
    sub_1B686D4(&StringLiteral_43/*"\n"*/, v10);
    this = (RestrictionNotSatisfyWholeInfo_o *)sub_1B686D4(&StringLiteral_1/*""*/, v11);
    byte_4A04DDA = 1;
  }
  if ( !restrictionEntity )
    goto LABEL_171;
  v12 = 1;
  switch ( restrictionEntity->fields.type )
  {
    case 1:
      v20 = 0;
      v21 = 1;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v22 = *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL);
        if ( v20 >= v22 )
        {
          v27 = v21;
        }
        else
        {
          if ( !partyItem )
            goto LABEL_171;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v20, 0LL);
          if ( !this )
            goto LABEL_171;
          v23 = (PartyOrganizationListViewItem_o *)this;
          if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
          {
LABEL_20:
            ++v20;
            continue;
          }
          servantEntity = v23->fields.servantEntity;
          svtLimitCount = v23->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v23, 0LL);
          if ( !servantEntity )
            goto LABEL_171;
          Individuality = ServantEntity__getIndividuality(servantEntity, svtLimitCount, (int32_t)this, 0LL);
          v21 = 0;
          v27 = 0;
          if ( !RestrictionEntity__IsRestriction_39319064(restrictionEntity, Individuality, 0LL) )
            goto LABEL_20;
        }
        break;
      }
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      v54 = v20 < v22;
      IsSearchVals_39318740 = v20 >= v22;
      v60 = v54;
      if ( this )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_61439096(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_43/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( v8 )
        {
          RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v8, v60 | v27 & 1, (System_String_o *)this, v61);
          if ( (v27 & 1) == 0 )
            goto LABEL_154;
LABEL_169:
          v12 = 1;
          return v12 & 1;
        }
      }
LABEL_171:
      sub_1B68930(this, restrictionEntity);
    case 6:
      v28 = 0;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        v29 = v28;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v30 = *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL);
        if ( v29 >= v30 )
          goto LABEL_100;
        if ( partyItem )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v29, 0LL);
          if ( this )
          {
            v28 = v29 + 1;
            if ( BYTE2(this[3].fields.wholeInfoPrefixLabel) )
              goto LABEL_100;
            continue;
          }
        }
        goto LABEL_171;
      }
    case 7:
      v31 = 0;
      v32 = 1;
      while ( 1 )
      {
LABEL_30:
        v33 = BalanceConfig_TypeInfo;
        v34 = v31;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v33 = BalanceConfig_TypeInfo;
        }
        if ( v31 >= v33->static_fields->DeckMemberMax )
        {
LABEL_40:
          IsSearchVals_39318740 = 1;
          goto LABEL_41;
        }
        ++v31;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)restrictionEntity->fields.targetVals,
                                                     v34 + 1,
                                                     (const MethodInfo_2E63938 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !partyItem )
            goto LABEL_171;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v34, 0LL);
          if ( !this )
            goto LABEL_171;
          v35 = this;
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
        v32 = 0;
        v31 = v34 + 1;
        if ( LOBYTE(v35[2].fields.m_CachedPtr) )
          goto LABEL_40;
        goto LABEL_30;
      }
      v32 = 0;
      IsSearchVals_39318740 = LOBYTE(v35[2].fields.m_CachedPtr) != 0;
LABEL_41:
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
      this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_61439096(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                                   (System_String_o *)StringLiteral_1/*""*/,
                                                   0LL);
      if ( !v8 )
        goto LABEL_171;
      RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
        v8,
        v32 & 1 | IsSearchVals_39318740 ^ 1,
        (System_String_o *)this,
        v37);
      if ( (v32 & 1) == 0 )
        goto LABEL_154;
      goto LABEL_169;
    case 8:
      v38 = 0;
      v39 = 1;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v38 >= *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 160LL) )
          goto LABEL_157;
        if ( !partyItem )
          goto LABEL_171;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v38, 0LL);
        if ( !this )
          goto LABEL_171;
        v40 = (PartyOrganizationListViewItem_o *)this;
        if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
          goto LABEL_55;
        if ( v40->fields.isFollower )
        {
          v39 = 0;
LABEL_157:
          IsSearchVals_39318740 = 0;
        }
        else
        {
          v41 = v40->fields.servantEntity;
          v42 = v40->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v40, 0LL);
          if ( !v41 )
            goto LABEL_171;
          v43 = ServantEntity__getIndividuality(v41, v42, (int32_t)this, 0LL);
          v39 = 0;
          if ( !RestrictionEntity__IsSearchVals_39318740(restrictionEntity, v43, 0LL) )
          {
LABEL_55:
            ++v38;
            continue;
          }
          IsSearchVals_39318740 = 1;
        }
        break;
      }
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
      this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_61439096(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                                   (System_String_o *)StringLiteral_1/*""*/,
                                                   0LL);
      if ( !v8 )
        goto LABEL_171;
      RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
        v8,
        v39 & 1 | IsSearchVals_39318740 ^ 1,
        (System_String_o *)this,
        v69);
      if ( (v39 & 1) != 0 )
        goto LABEL_169;
      goto LABEL_154;
    case 9:
      if ( !partyItem )
        goto LABEL_171;
      this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, 0, 0LL);
      if ( !this )
        goto LABEL_171;
      v44 = (PartyOrganizationListViewItem_o *)this;
      IsEmpty = PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL);
      if ( IsEmpty )
      {
        IsSearchVals_39318740 = 0;
        v46 = 1;
      }
      else
      {
        if ( v44->fields.isFollower )
        {
          IsSearchVals_39318740 = 0;
        }
        else
        {
          v70 = v44->fields.servantEntity;
          v71 = v44->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v44, 0LL);
          if ( !v70 )
            goto LABEL_171;
          v72 = ServantEntity__getIndividuality(v70, v71, (int32_t)this, 0LL);
          IsSearchVals_39318740 = RestrictionEntity__IsSearchVals_39318740(restrictionEntity, v72, 0LL);
        }
        v46 = IsSearchVals_39318740 ^ 1;
      }
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
      this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_61439096(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                                   (System_String_o *)StringLiteral_1/*""*/,
                                                   0LL);
      if ( !v8 )
        goto LABEL_171;
      RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v8, v46 & 1, (System_String_o *)this, v73);
      if ( IsEmpty )
        goto LABEL_169;
      goto LABEL_154;
    case 0xA:
      v47 = 0;
      v48 = 0;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v47 < *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL) )
        {
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v47, 0LL);
            if ( this )
            {
              v48 += !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL);
              ++v47;
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
        v59 = restrictionEntity->fields.targetVals;
        if ( !v59 )
          goto LABEL_171;
        if ( !v59->max_length )
LABEL_172:
          sub_1B68938(this, restrictionEntity);
        IsSearchVals_39318740 = v48 == v59->m_Items[1];
      }
      else
      {
LABEL_120:
        IsSearchVals_39318740 = 1;
      }
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
      v17 = System_String__Replace_61439096(
              (System_String_o *)this,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      v19 = IsSearchVals_39318740 ^ 1;
LABEL_123:
      v56 = v8;
      goto LABEL_153;
    case 0xB:
      v49 = 0;
      v48 = 0;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v49 >= *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL) )
          goto LABEL_116;
        if ( partyItem )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v49, 0LL);
          if ( this )
          {
            v50 = this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
              v48 += LOBYTE(v50[2].fields.m_CachedPtr) ^ 1;
            ++v49;
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
      v15 = (char)this;
      IsSearchVals_39318740 = (unsigned __int8)this ^ 1;
      v17 = System_String__Replace_61439096(
              name,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      v19 = v15 & 1;
      goto LABEL_123;
    case 0xD:
      v51 = 0;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        v29 = v51;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v30 = *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL);
        if ( v29 >= v30 )
          goto LABEL_100;
        if ( partyItem )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v29, 0LL);
          if ( this )
          {
            v51 = v29 + 1;
            if ( BYTE5(this[5].fields.wholeInfoPrefixLabel) )
              goto LABEL_100;
            continue;
          }
        }
        goto LABEL_171;
      }
    case 0xE:
      v52 = 0;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v52 >= *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL) )
        {
          for ( i = 0; ; ++i )
          {
            if ( !LODWORD(this[4].klass) )
            {
              j_il2cpp_runtime_class_init_0(this);
              this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
            }
            v63 = *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 160LL);
            IsSearchVals_39318740 = i < v63;
            if ( i >= v63 )
              break;
            if ( !partyItem )
              goto LABEL_171;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, i, 0LL);
            if ( !this )
              goto LABEL_171;
            v64 = (PartyOrganizationListViewItem_o *)this;
            if ( BYTE5(this[3].fields.wholeInfoPrefixLabel)
              && !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
            {
              v65 = v64->fields.servantEntity;
              v66 = v64->fields.svtLimitCount;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v64, 0LL);
              if ( !v65 )
                goto LABEL_171;
              v67 = ServantEntity__getIndividuality(v65, v66, (int32_t)this, 0LL);
              if ( RestrictionEntity__IsSearchVals_39318740(restrictionEntity, v67, 0LL) )
                break;
            }
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          v58 = i >= v63;
        }
        else
        {
          if ( !partyItem )
            goto LABEL_171;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v52, 0LL);
          if ( !this )
            goto LABEL_171;
          if ( !BYTE5(this[3].fields.wholeInfoPrefixLabel) || !BYTE3(this[4].monitor) )
          {
            ++v52;
            continue;
          }
          IsSearchVals_39318740 = 0;
          v58 = 1;
        }
        break;
      }
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
LABEL_152:
      v17 = System_String__Replace_61439096(
              (System_String_o *)this,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      v56 = v8;
      v19 = v58;
      goto LABEL_153;
    case 0xF:
      v53 = 0;
      while ( 2 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        v29 = v53;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        v30 = *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL);
        if ( v29 < v30 )
        {
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v29, 0LL);
            if ( this )
            {
              v53 = v29 + 1;
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
      v54 = v29 < v30;
      IsSearchVals_39318740 = v29 >= v30;
      v55 = v54;
      v17 = System_String__Replace_61439096(
              (System_String_o *)this,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      v56 = v8;
      v19 = v55;
LABEL_153:
      RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v56, v19, v17, v18);
LABEL_154:
      v12 = IsSearchVals_39318740 ^ 1;
      return v12 & 1;
    case 0x11:
      v57 = 0;
      while ( 1 )
      {
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v57 >= *(_DWORD *)(*(_QWORD *)&this[3].fields.m_CachedPtr + 156LL) )
          break;
        if ( !partyItem )
          goto LABEL_171;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v57, 0LL);
        if ( !this )
          goto LABEL_171;
        if ( !BYTE6(this[5].fields.wholeInfoPrefixLabel) )
        {
          ++v57;
          if ( SLODWORD(this[5].fields.wholeInfoLabel) <= 0 )
            continue;
        }
        v58 = 1;
        goto LABEL_150;
      }
      v58 = 0;
LABEL_150:
      this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
      if ( !this )
        goto LABEL_171;
      IsSearchVals_39318740 = !v58;
      goto LABEL_152;
    default:
      return v12 & 1;
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

  if ( (byte_4A04DDB & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_25241/*"・"*/, isWarning);
    byte_4A04DDB = 1;
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
      UILabel__set_text((UILabel_o *)notSatisfySprite, (System_String_o *)StringLiteral_25241/*"・"*/, 0LL);
      notSatisfySprite = (UnityEngine_Component_o *)this->fields.wholeInfoLabel;
      if ( notSatisfySprite )
      {
        v14 = message;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_1B68930(notSatisfySprite, isWarning);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)notSatisfySprite, 1, 0LL);
  wholeInfoPrefixLabel = this->fields.wholeInfoPrefixLabel;
  notSatisfySprite = (UnityEngine_Component_o *)RestrictionNotSatisfyWholeInfo__AddColorCodeAndFixMessage(
                                                  v9,
                                                  (System_String_o *)StringLiteral_25241/*"・"*/,
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